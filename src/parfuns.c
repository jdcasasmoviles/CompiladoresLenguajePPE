#include <stdio.h>
#include <string.h>

#include "structs.h"
#include "parfuns.h"

struct Stack * crearstack(char * sid) {
    extern struct Programa prog;
    prog.nums++;
    prog.actual++;
    struct Stack * stck = &prog.stacks[prog.actual];
    stck->iid     = prog.actual;            // Identificador numerico del Stack principal;
    stck->sid     = strdup(sid);            // Nombre del Stack principal
    stck->nums    = 0;                      // No hay simbolos todavia
    stck->numc    = 0;                      // No hay codigos todavia
    stck->numvt   = 0;                      // No hay variables temporales todavia
    stck->numif   = 0;                      // No hay IFs todavia
    stck->totif   = 0;                      // No hay IFs todavia
    stck->numfor  = 0;                      // No hay FORs todavia
    stck->numelse = 0;                      // No hay ELSEs todavia
    stck->numlbl  = 0;                      // No hay Labels tidavia
    return stck;
}

void programa(char * sid) {
    extern struct Programa prog;            // Referencia al programa principal declarado en main
    prog.sid    = strdup(sid);              // Establece el nombre del Stack
    prog.nums   = 0;                        // Este es el primer Stack
    prog.actual = -1;                       // Indice del Stack actual (-1 = no hay)
    struct Stack * stck = crearstack("main");
    agregarsim(sid, 'P', "", 0, 0);
    agregarcod("begpr", sid, "", "");
}

struct Stack *getstackactual() {
    extern struct Programa prog;    // Referencia al programa principal declarado en main
    int actual = prog.actual;       // Indice del Stack actual
    return &prog.stacks[actual];    // Retorna el Stack actual
}

char * genvartemp(char tp) {
    struct Stack * stck = getstackactual(); // Stack actual
    int    nvt = stck->numvt;               // Numero de variables temporales en el Stack actual
    char * tmp;                             // Variable temporal
    asprintf(&tmp, "$tmp_%d", nvt);         // Nombrando la variable temporal
    agregarsim(tmp, tp, "", 0, 0);          // Agrega la variable temporal a la Tabla de simbolos
    (stck->numvt)++;                        // Registra la variable temporal
    
    return tmp;
}

void agregarsim(char * id, char tp, char * sval, int ival, float fval) {
    struct Stack * stck = getstackactual();     // Stack actual
    struct Simbolo * tbls = stck->tbls;         // Tabla de Simbolos del Stack actual
    int nums = stck->nums;                      // Numero de Simbolos en la tabla de Simbolos
    struct Simbolo * sim = &tbls[nums];         // Simbolo a agregar
    sim->id  = strdup(id);                      // Id del Simbolo
    sim->tp  = tp;                              // Tipo del Simbolo
    switch (tp) {
        case 'S': 
            sim->val.sval = strdup(sval);       // Establece el valor en caso que sea String
            break;
        case 'Z': 
            sim->val.ival = ival;               // Establece el valor en caso que sea Entero
            break;
        case 'R': 
            sim->val.fval = fval;               // Establece un valor en caso que sea Real
            break;
    }
    (stck->nums)++;                             // Registra el nuevo Simbolo
}

void agregarcod(char * opc, char * op1, char * op2, char * op3) {
    struct Stack * stck = getstackactual();     // Stack actual
    struct Codigo * tblc = stck->tblc;          // Tabla de Codigos del Stack actual
    int numc = stck->numc;                      // Numero de Codigos en la tabla de odigos
    struct Codigo * cod = &tblc[numc];          // Codigo a agregar
    cod->opc = strdup(opc);                     // Operacion del codigo
    cod->op1 = strdup(op1);                     // Primer operador del codigo
    cod->op2 = strdup(op2);                     // Segundo operador del codigo
    cod->op3 = strdup(op3);                     // Tercer operador del codigo
    (stck->numc)++;                             // Registra el nuevo Codigo
}

void declararvar(char *id, char tipo) {
    //TODO Comprobar que el simbolo no haya sido declarado antes
    agregarsim(id, tipo, "", 0, 0);             // Valores por defecto para el nuevo simbolo
}

void asignar(char * op1, char * op2) {
    //TODO Comprobar que los simbolos existan
    agregarcod("asign", op1, op2, "");
}

char * operacion(char * op, char * op1, char * op2) {
    //TODO Comprobar que los simbolos existen
    char * tmp = genvartemp('Z');   //TODO Verificar el tipo de la operacion
    agregarcod(op, tmp, op1, op2);
    return tmp;
}

char * comparacion(char *opc, char *op1, char *op2) {
    char * tmp = genvartemp('Z');   //TODO Verificar el tipo de la comparacion
    agregarcod(opc, tmp, op1, op2);
    return tmp;
}

char * negar(char *id) {
    char * tmp = genvartemp('Z');   //TODO Verificar el tipo de la comparacion
    agregarcod("negar", id, "", "");
    return tmp;
}

void agregarlbl(char *lbl, int lin) {
    struct Stack * stck = getstackactual();     // Stack actual
    struct Label * lbls = stck->lbls;           // Labels
    int numlbl = stck->numlbl;                  // Numero de LABELs
    lbls[numlbl].lbl = strdup(lbl);
    lbls[numlbl].lin = lin;
    (stck->numlbl)++;
}

void printlbls() {
    struct Stack * stck = getstackactual();     // Stack actual
    struct Label * lbls = stck->lbls;
    int numlbl = stck->numlbl;
    for (int i = 0; i < numlbl; i++) {
        printf("lbl: %s\t\t", lbls[i].lbl);
        printf("lin: %d\n", lbls[i].lin);
    }
}

void begif() {
    struct Stack * stck = getstackactual();     // Stack actual
    char *tmp;
    stck->numif = stck->totif;
    asprintf(&tmp, "$begif_%d", ++(stck->numif));
    (stck->totif)++;
    agregarlbl(tmp, stck->numc);
    agregarcod("label", tmp, "", "");
}

void begfor() {
    struct Stack * stck = getstackactual();     // Stack actual
    char * tmp;
    stck->numfor = stck->totfor;
    asprintf(&tmp, "$begfor_%d", ++(stck->numfor));
    (stck->totfor)++;
    agregarlbl(tmp, stck->numc);
    agregarcod("label", tmp, "", "");
}

void endfor() {
    struct Stack * stck = getstackactual();
    char *tmp;
    asprintf(&tmp, "$begfor_%d", stck->numfor);
    agregarcod("salta", tmp, "", "");
    asprintf(&tmp, "$endfor_%d", stck->numfor);
    agregarlbl(tmp, stck->numc);
    agregarcod("label", tmp, "", "");
    (stck->numfor)--;
}

void jmp2endfor(char *expr) {
    struct Stack * stck = getstackactual();
    char *tmp;
    asprintf(&tmp, "$endfor_%d", stck->numfor);
    agregarcod("salt0", expr, tmp, "");
    asprintf(&tmp, "$tmpfor_%d", stck->numfor);
    agregarsim(tmp, 'Z', "", 0, 0.0);
    char *tmp2;
    asprintf(&tmp2, "$bfor_%d", stck->numfor);
    agregarcod("salt0", tmp, tmp2, "");
}

void fixbfor() {
    struct Stack * stck = getstackactual();
    char * tmp;
    asprintf(&tmp, "$bfor_%d", stck->numfor);
    agregarlbl(tmp, stck->numc);
    agregarcod("label", tmp, "", "");
    char * tmp2;
    asprintf(&tmp2, "$tmpfor_%d", stck->numfor);
    agregarsim("1", 'Z', "", 1, 0.0);
    agregarcod("asign", tmp2, "1", "");
}

void jmp2else(char *expr) {
    struct Stack * stck = getstackactual();     // Stack actual
    int numif = stck->numif;
    int numelse = ++(stck->numelse);
    char * tmp;
    asprintf(&tmp, "$else_%d_%d", numif, numelse);
    agregarcod("salt0", expr, tmp, "");
}

void elselbl() {
    struct Stack * stck = getstackactual();     // Stack actual
    int numif = stck->numif;
    int numelse = stck->numelse;
    char * tmp;
    asprintf(&tmp, "$else_%d_%d", numif, numelse);
    agregarlbl(tmp, stck->numc);
    agregarcod("label", tmp, "", "");
}

void endif() {
    struct Stack * stck = getstackactual();     // Stack actual
    int numif = stck->numif;
    int numelse = stck->numelse;
    char *tmp;
    asprintf(&tmp, "$endif_%d", (stck->numif)--);
    agregarlbl(tmp, stck->numc);
    agregarcod("label", tmp, "", "");
}

void jmp2endif() {
    struct Stack * stck = getstackactual();     // Stack actual
    int numif = stck->numif;
    int numelse = stck->numelse;
    char *tmp;
    asprintf(&tmp, "$endif_%d", stck->numif);
    agregarcod("salta", tmp, "", "");
}

struct Simbolo * getsimbolo(char *op1) {
    struct Stack * stck = getstackactual();         // Stack actual
    struct Simbolo * tbls = stck->tbls;
    int nums = stck->nums;
    
    for (int i = 0; i < nums; i++) {
        if (strcmp(tbls[i].id, op1) == 0) {
            return &tbls[i];
        }
    }
    
    return tbls; //TODO Eliminar esta linea
}

int buscarlbl(char *lbl) {
    struct Stack * stck = getstackactual();         // Stack actual
    struct Label * lbls = stck->lbls;               // Tabla de LABELs
    int numlbl = stck->numlbl;
    
    for (int i = 0; i < numlbl; i++) {
        if (strcmp(lbl, lbls[i].lbl) == 0) {
            return lbls[i].lin;
        }
    }
    
    return -1;
}
void endprog(char * sid) {
    agregarcod("endpr", sid, "", "");
}

void newfunc(char * fid) {
    struct Stack * stck = crearstack(fid);
    agregarcod("begfx", fid, "", "");
}

void exefunc(char * id) {
    agregarcod("exefx", id, "", "");
}

int iidof(char *sid) {
    extern struct Programa prog;
    int nums = prog.nums;   // Numero de stacks en el programa
    struct Stack * stacks = prog.stacks;
    for (int i = 0; i < nums; i++) {
        if (strcasecmp(stacks[i].sid, sid) == 0) {
            return i;
        }
    }
    return -1;
}

void resetparams() {
    extern struct Programa prog;
    prog.nump = 0;
}

void agregarparam(char * id) {
    //TODO Comprobar tipos
    agregarcod("param", id, "", "");
}

void printparams() {
    extern struct Programa prog;
    int nump = prog.nump;
    for (int i = 0; i < nump; i++) {
        printf("param ID: %s\t", prog.params[i].id);
        printf("param TP: %c\t", prog.params[i].tp);
        printf("param VAL: %d\n", prog.params[i].val.ival);
    }
}

void copiarparams2tbls() {
    extern struct Programa prog;
    struct Simbolo * params = prog.params;
    int nump = prog.nump;
    for (int i = 0; i < nump; i++) {
        //TODO Comprobar tipo
        agregarsim(params[i].id, params[i].tp, "", params[i].val.ival, 0.0);
    }
}

char * ret() {
    //TODO Comprobar tipos
    char * tmp = genvartemp('Z');
    agregarcod("retor", tmp, "", "");
    return tmp;
}

void interpretar() {
    struct Stack * stck = getstackactual();         // El Stack actual
    struct Simbolo * tbls = stck->tbls;             // Tabla de simbolos del Stack
    struct Codigo  * tblc = stck->tblc;             // Tabla de codigos del Stack
    int nums = stck->nums;                          // Numero de simbolos en la Tabla de Simbolos
    int numc = stck->numc;                          // Numero de codigos en la Tabla de Codigos
    
    //printf("numc = %d\n", numc);
    
    for (int i = 0; i < numc; i++) {                // Procesa cada codigo
        struct Codigo * cod = &tblc[i];             // Codigo actual
        char *opc = strdup(cod->opc);               // Operacion
        char *op1 = strdup(cod->op1);               // Primer operador
        char *op2 = strdup(cod->op2);               // Segundo operador
        char *op3 = strdup(cod->op3);               // Tercer operador
        
        if (strcasecmp(opc, "asign") == 0) {
            //TODO Comprobar tipos
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            sim1->val.ival = sim2->val.ival;
        }
        else if (strcasecmp(opc, "sumar") == 0) {
            //TODO Comprobar tipos
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            sim1->val.ival = sim2->val.ival + sim3->val.ival;
        }
        else if (strcasecmp(opc, "resta") == 0) {
            //TODO Comprobar tipos
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            sim1->val.ival = sim2->val.ival - sim3->val.ival;
        }
        else if (strcasecmp(opc, "multi") == 0) {
            //TODO Comprobar tipos
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            sim1->val.ival = sim2->val.ival * sim3->val.ival;
        }
        else if (strcasecmp(opc, "divid") == 0) {
            //TODO Comprobar tipos
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            sim1->val.ival = sim2->val.ival / sim3->val.ival;
        }
        else if (strcasecmp(opc, "mayor") == 0) {
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            //TODO Comprobar los tipos
            if (sim2->val.ival > sim3->val.ival) {
                sim1->val.ival = 1;
            } else {
                sim1->val.ival = 0;
            }
        }
        else if (strcasecmp(opc, "menor") == 0) {
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            //TODO Comprobar los tipos
            if (sim2->val.ival < sim3->val.ival) {
                sim1->val.ival = 1;
            } else {
                sim1->val.ival = 0;
            }
        }
        else if (strcasecmp(opc, "mayig") == 0) {
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            //TODO Comprobar los tipos
            if (sim2->val.ival >= sim3->val.ival) {
                sim1->val.ival = 1;
            } else {
                sim1->val.ival = 0;
            }
        }
        else if (strcasecmp(opc, "menig") == 0) {
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            //TODO Comprobar los tipos
            if (sim2->val.ival <= sim3->val.ival) {
                sim1->val.ival = 1;
            } else {
                sim1->val.ival = 0;
            }
        }
        else if (strcasecmp(opc, "igual") == 0) {
            struct Simbolo * sim1 = getsimbolo(op1);
            struct Simbolo * sim2 = getsimbolo(op2);
            struct Simbolo * sim3 = getsimbolo(op3);
            //TODO Comprobar los tipos
            if (sim2->val.ival == sim3->val.ival) {
                sim1->val.ival = 1;
            } else {
                sim1->val.ival = 0;
            }
        }
        else if (strcasecmp(opc, "salt0") == 0) {
            struct Simbolo * sim1 = getsimbolo(op1);
            //TODO Comprobar los tipos
            if (sim1->val.ival == 0) {
                i = buscarlbl(op2);
            }
        }
        else if (strcasecmp(opc, "salta") == 0) {
            i = buscarlbl(op1);
        }
        else if (strcasecmp(opc, "print") == 0) {
            struct Simbolo * sim1 = getsimbolo(op1);
            //TODO Comprobar tipo
            printf("%d\n", sim1->val.ival);
        }
        else if (strcasecmp(opc, "exefx") == 0) {
            extern struct Programa prog;
            int tmpactual = prog.actual;    // Guarda el stack actual
            prog.actual = iidof(op1);
            copiarparams2tbls();
            interpretar();
            prog.actual = tmpactual;        // Restaura el stack actual
        }
        else if (strcasecmp(opc, "param") == 0) {
            extern struct Programa prog;
            struct Simbolo * params = prog.params;
            struct Simbolo * sim = getsimbolo(op1);
            int nump = prog.nump;
            params[nump].id = sim->id;
            params[nump].tp = sim->tp;
            params[nump].val.ival = sim->val.ival;
            (prog.nump)++;
        }
        else if (strcasecmp(opc, "return") == 0) {
            extern struct Programa prog;
            struct Simbolo * ret = &prog.ret;
            // Copiamos el simbolo al retorno
            struct Simbolo * sim = getsimbolo(op1);
            ret->id = sim->id;
            ret->tp = sim->tp;
            ret->val.ival = sim->val.ival;
        }
        else if (strcasecmp(opc, "retor") == 0) {
            extern struct Programa prog;
            struct Simbolo * ret = &prog.ret;
            struct Simbolo * sim = getsimbolo(op1);
            sim->val.ival = ret->val.ival;
        }
    }
}