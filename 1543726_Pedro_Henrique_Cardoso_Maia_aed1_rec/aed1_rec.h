#ifndef AED1_REC_H_INCLUDED 
#define AED1_REC_H_INCLUDED

#include <stdbool.h>

//Declarações das funções 
int soma_divisores_pares(int x);
int soma_divisores_impares(int x);
bool primo(int x);

int testar_simbolo_logico      (  char str );
int testar_simbolo_aritmetico  (  char str );
int testar_simbolo_relacional  (  char str );
int testar_simbolo_separador   (  char str );


#endif