#ifndef __PARFUNS_H__
#define __PARFUNS_H__
// Funciones que se lanzan en el parser
void programa(char *);                              // Inicia los parametros del programa
void endprog(char *);
struct Simbolo * getsimbolo(char *);
void agregarsim(char *, char, char *, int, float);  // Agrega un nuevo Simbolo al Stack actual 
void agregarcod(char *, char *, char *, char *);    // Agrega un nuevo Codigo al Stack actual
void declararvar(char *, char);                     // Declara una nueva variable
void asignar(char *, char *);                       // Asignacion
char * operacion(char *, char *, char *);           // Operacion binaria (+, -, *, /)
char * comparacion(char *, char *, char *);         // Comparacion (<, >, <=, >=, ==)
char * negar(char *);                               // Negar variable (!)
void begif();                                       // Inicio de If
void begfor();
void endfor();
void jmp2endfor(char *);
void fixbfor();
void jmp2else(char *);                              // Saltar
void elselbl();
void endif();
void jmp2endif();
void interpretar();
void printlbls();
void show(char *);
void newfunc(char *);
void exefunc(char *);
void resetparams();
void agregarparam();
void printparams();
char * ret();
#endif