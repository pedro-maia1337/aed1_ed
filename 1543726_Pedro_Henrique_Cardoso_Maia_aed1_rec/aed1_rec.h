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

double maior_entre_tres(double a, double b, double c);

bool verificar_intervalo(int a, int b, double x);

double calcular_soma_inversos(int a, int b);

int testar_simbolo(char c);

void processar_valores(double a, double b, int *dentro, int *fora, int *abaixo, int *acima);

int ordem_crescente_num(double x, double y, double z);

// Função para verificar se está em ordem decrescente
int ordem_decrescente_num(double x, double y, double z);


int ordem_crescente(char *x, char *y, char *z);

// Função para verificar ordem alfabética decrescente
int ordem_decrescente(char *x, char *y, char *z); 


#endif
