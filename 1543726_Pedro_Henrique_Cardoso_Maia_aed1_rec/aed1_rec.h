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

float maior_entre_tres(float a, float b, float c);

int ordem_crescente_num(float x, float y, float z);

// Função para verificar se está em ordem decrescente
int ordem_decrescente_num(float x, float y, float z) (x > y) && (y > z);
}

int ordem_crescente(char x[], char y[], char z[]);

// Função para verificar ordem alfabética decrescente
int ordem_decrescente(char x[], char y[], char z[]); 


#endif
