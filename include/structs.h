#ifndef __STRUCTS_H__
#define __STRUCTS_H__

#define MAX_SIMBOLOS       1024
#define MAX_CODIGOS        1024
#define MAX_TABLA_SIMBOLOS 1024
#define MAX_TABLA_CODIGOS  1024
#define MAX_STACKS         1024

// *********************************************// Declaracion de structuras

union Val {
     char *sval;                                // Cadena de caracteres
      int  ival;                                // Numero entero
    float  fval;                                // Numero real
};

struct Simbolo {
         char *id;                              // Identificador del simbolo
         char  tp;                              // Tipo del simbolo
    union Val  val;                             // Valor del simbolo
};

struct Codigo {
    char *opc;                                  // Codigo de la operacion
    char *op1;                                  // Operando 1
    char *op2;                                  // Operando 2
    char *op3;                                  // Operando 3
};

struct Label {
    char * lbl;     // Etiqueta
    int    lin;     // Linea de codigo
};

struct Stack {
               int   iid;                       // Identificador numerico del Stack
              char * sid;                       // Nombre del Stack
               int   nums;                      // Numero de simbolos en la tabla de simbolos
               int   numc;                      // Numero de codigos en la tabla de codigos
               int   numvt;                     // Numero de variables temporales
               int   numif;                     // Identificador de IFs en el Stack actual
               int   totif;                     // Numero total de IFs
               int   numelse;                   // Numero de elses en el Stack actual
               int   numfor;                    // Numero de FORs en el Stack actual
               int   totfor;                    // Numero total de FORs
               int   numlbl;
    struct   Label   lbls[MAX_CODIGOS];
    struct Simbolo   tbls[MAX_TABLA_SIMBOLOS];  // Tabla de simbolos del Stack
    struct  Codigo   tblc[MAX_TABLA_CODIGOS];   // Tabla de codigos del Stack
};

struct Programa {
              char * sid;                       // Nombre del Programa
               int   nums;                      // Numero de Stacks del Programa
               int   actual;                    // Indice del Stack actual
               int   nump;                      // Numero de parametros
    struct Simbolo   params[10];                // Parametros que se pasan entre Stacks
    struct Simbolo   ret;                       // Simbolos que se retorna de un Stack a otro
    struct Stack     stacks[MAX_STACKS];        // Stacks del Programa
};

// ******************************************** // Declaracion de funciones

void printprog(struct Programa *prog);          // Imprime los datos del programa
void printtbls(struct Simbolo * tbl, int len);  // Imprime la Tabla de Simbolos
void printtblc(struct Codigo * tbl, int len);   // Imprime la Tabla de Codigos
#endif