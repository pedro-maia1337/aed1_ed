#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void multiplos_de_tres(int n, int x) {
    if(n == 0) return;
    x = x + (3 * 1);
    printf("%d ", x);
    multiplos_de_tres(n - 1, x);
}

void multiplos_de_tres_decrescente(int n, int x) {
    if(n == 0) return;
    printf("%d ", x);
    x = x - (3 * 1);
    multiplos_de_tres_decrescente(n - 1, x);
}

void inverso_multiplos_de_tres(int n, double x, int count) { 
    if(n == count) return;
    printf("%lf ", 1.0 / x);
    x = x + (3.0 * 1.0);
    inverso_multiplos_de_tres(n, x, count + 1);
}

void inverso_multiplos_de_tres_decrescente(int n, double x, int count) { // voltar
    if(n == count) return;
    printf("%lf ", 1.0 / x);
    x = x - 3.0;
    inverso_multiplos_de_tres_decrescente(n, x, count + 1);
}

int gerar_valor_somado(int x) { 
    if(x < 2) return x;
    return (x * 2) - 1;
}

int gerar_adicao_de_valores_impares(int n, int x) {
    if(0 <= n){
        x = x + gerar_valor_somado(n); 
        gerar_adicao_de_valores_impares(n - 1, x);
        return x;
    } 

    return 0;
}

int gerar_soma_adicao_de_valores_impares(int t, int x, int soma) {
    for(int n = 1; n <= t; n++) { // alterar o valor de 5 altera o valor do resulltado 
        soma = soma + x;
        x = gerar_adicao_de_valores_impares(n, x);
    }

    return soma;
}

double gerar_inversos_adicao_de_valores_impares(int t, int x, double soma){
    for(int n = 1; n <= t; n++) { // alterar o valor de 5 altera o valor do resulltado 
        soma = soma + (1.0 / (double)x);
        x = gerar_adicao_de_valores_impares(n, x);
    }

    return soma;
}

void inverte_string(char *str, int tam) {
    if(tam < 0) return;

    printf("%c\n", str[tam]);
    inverte_string(str, tam - 1);
}

int verifica_string(char *str, int tam, int qtd) {
    if(tam < 0) return qtd;

    if(str[tam] >= 'A' && str[tam] <= 'Z' && str[tam] > 'C' && str[tam] < 'P') {
        qtd++;
    }

    return verifica_string(str, tam - 1, qtd);
}

int fib(int n) {
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}


int soma_termo_par_fib(int n, int soma, int ac) {
    if(n == 0)  return soma;
    
    ac = ac + 3;
    soma = soma + fib(ac);
    return soma_termo_par_fib(n - 1, soma, ac); 
}

int potencia(int base, int exp) {
    if(exp == 0) return 1;

    return base * potencia(base, exp - 1);
}

int soma_potencia(int x, int n, int soma, int pot) {
    if(n == 1) return soma;

    soma = soma + potencia(x, pot);
    pot = pot + 2;

    return soma_potencia(x, n - 1, soma, pot);
}


int fat(int n) {
    if(n == 0) return 1;

    return n * fat(n - 1);
}

double soma_divisao_fatorial(double x, int n, int denominador, double soma) { //retornar
    if(n == 1) return soma;

    soma = soma + (x / (double) fat(denominador)); //renomear essa porra de denominador
    x = x + 2;
    denominador = denominador * 2;

    return soma_divisao_fatorial(x, n - 1, denominador, soma);
}