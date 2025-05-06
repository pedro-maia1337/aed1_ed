#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

int soma_divisores_pares(int x) {
    int resto = 0;
    int contador = 0;
    int divisor = 0;

    for(int i = 1; i <= x; i++){
        resto = x % i;
        if(resto == 0){
            divisor = i;
            if(divisor % 2 == 0) contador = contador + 1;
        }
    }

    printf("%d ", contador);

    return contador;
}


int soma_divisores_impares(int x) {
    int resto = 0;
    int contador = 0;
    int divisor = 0;

    for(int i = 1; i <= x; i++){
        resto = x % i;
        if(resto == 0){
            divisor = i;
            if(divisor % 2 != 0) contador = contador + 1;
        }
    }

    printf("%d ", contador);

    return contador;
}

bool primo(int x) {
    int divisores = 0;
  
    for(int i = 1; i <= x; i++) {
        if(x % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        return true;
    } else {
        return false;
    }
}

int testar_simbolo_logico(char str) {
    if(str == '!' || str == '|' || str == '&') return 1;
    return 0;
}

int testar_simbolo_aritmetico(char str){
    if(str == '+' || str == '-' || str == '*' || str == '/' || str == '%') return 2;
    return 0;
}

int testar_simbolo_relacional(char str) {
    if(str == '>' || str == '<' || str == '=') return 3;
    return 0;
}

int testar_simbolo_separador(char str){
    if(str == ' ' || str == '.' || str == ',' || str == ';' || str == ':' || str == '_') return 4;
    
    return 0;
}

double maior_entre_tres(double a, double b, double c) {
    double maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}

int ordem_crescente_num(double x, double y, double z) { // ex7
    return (x < y) && (y < z);
}


int ordem_decrescente_num(double x, double y, double z) { // ex7
    return (x > y) && (y > z);
}

int ordem_crescente(char *x, char *y, char *z) {
    return (strcmp(x, y) < 0) && (strcmp(y, z) < 0);
}


int ordem_decrescente(char *x, char *y, char *z) {
    return (strcmp(x, y) > 0) && (strcmp(y, z) > 0);
}


