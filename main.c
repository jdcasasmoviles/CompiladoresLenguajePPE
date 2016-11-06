#include <stdio.h>

#include "parser.h"
#include "parfuns.h"
#include "structs.h"

struct Programa prog;

int main (int argc, char **argv) {
    if(!yyparse()) {
        printf("programa valido!\n");
    } else {
        printf("programa no valido!\n");
    }
    
    printprog(&prog);
    //printlbls();
    prog.actual = 0;

    interpretar();
    //printparams();

    printprog(&prog);
    
    return 0;
}
