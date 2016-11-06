#include <stdio.h>
#include <string.h>

#include "structs.h"

void printprog(struct Programa *prog) {
    int numstacks = prog->nums;                     // Numero de Stacks del Programa
    
    printf("PROGRAMA: %s\n", prog->sid);
    
    for (int i = 0; i < numstacks; i++) {           // Procesando cada Stack del Programa
        struct Stack   * stck = &prog->stacks[i];   // Stack a procesar
        struct Simbolo * tbls = stck->tbls;         // Tabla de simbolos del Stack
        struct Codigo  * tblc = stck->tblc;         // Tabla de codigos del Stack
        int numsims = stck->nums;                   // Numero de simbolos en la Tabla de simbolos
        int numcods = stck->numc;                   // Numero de codigos en la Tabla de codigos
        
        printf("\nStack: %s\n", stck->sid);
        printf("----------------------\n");
        
        printtbls(tbls, numsims);                   // Imprime la Tabla de simbolos del Stack
        printtblc(tblc, numcods);                   // Imprime la Tabla de codigos del Stack
    }
}

void printtbls(struct Simbolo * tbl, int len) {
    printf("\nTabla de Simbolos\n");
    printf("ID\tTIPO\tSVAL\tIVAL\tFVAL\n");
    
    for (int i = 0; i < len; i++) {                 // Procesa cada Simbolo de la Tabla
        char * id   = strdup(tbl[i].id);            // Id del Simbolo
        char   tipo = tbl[i].tp;                    // Tipo del Simbolo
        char * sval = "";                           // Valor si es String
        int    ival = 0;                            // Valor si es Entero
        float  fval = 0;                            // Valor si es Real
        
        switch (tipo) {                             // Establece el valor del simbolo segun su tipo
            case 'S': sval = tbl[i].val.sval; break;
            case 'Z': ival = tbl[i].val.ival; break;
            case 'R': fval = tbl[i].val.fval; break;
        }
        
        printf("%s\t", id);
        printf("%c\t", tipo);
        printf("%s\t", sval);
        printf("%d\t", ival);
        printf("%f\n", fval);
    }
}

void printtblc(struct Codigo * tbl, int len) {
    printf("\nTabla de Codigos\n");
    printf("OPCODE\tOP1\tOP2\tOP3\n");
    
    for (int i = 0; i < len; i++) {                 // Procesa cada Codigo de la Tabla
        char *opc = tbl[i].opc;                     // Opcode del codigo
        char *op1 = tbl[i].op1;                     // Primer operando del Codigo
        char *op2 = tbl[i].op2;                     // Segundo operando del Codigo
        char *op3 = tbl[i].op3;                     // Tercer operando del Codigo
        
        printf("%s\t", opc);
        printf("%s\t", op1);
        printf("%s\t", op2);
        printf("%s\n", op3);
    }
}