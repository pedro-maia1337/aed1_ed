#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void multiplos_de_tres(int n, int x, int count) {
    if(n == count) return;
    x = x + (3 * 1);
    printf("%d ", x);
    multiplos_de_tres(n, x, count + 1);
}

void multiplos_de_tres_decrescente(int n, int x, int count) {
    if(n == count) return;
    printf("%d ", x);
    x = x - (3 * 1);
    multiplos_de_tres_decrescente(n, x, count + 1);
}

void inverso_multiplos_de_tres(int n, double x, int count) {
    if(n == count) return;
    printf("%lf ", 1.0 / x);
    x = x + (3.0 * 1.0);
    inverso_multiplos_de_tres(n, x, count + 1);
}

void inverso_multiplos_de_tres_decrescente(int n, double x, int count) {
    if(n == count) return;
    printf("%lf ", 1.0 / x);
    x = x - (3.0 * 1.0);
    inverso_multiplos_de_tres_decrescente(n, x, count + 1);
}

int gerar_impar(int x) { //renomear essa função 
    if(x < 2) return x;
    return (x * 2) - 1;
}

int gerar_adicao_de_valores_impares(int n, int x, int count) {
    if(count <= n){
        x = x + gerar_impar(n); 
        gerar_adicao_de_valores_impares(n, x, count + 1);
        return x;
    } 

    return 0;
}

int gerar_soma_adicao_de_valores_impares(int x, int soma) {
    for(int n = 1; n <= 5; n++) {
        soma = soma + x;
        x = gerar_adicao_de_valores_impares(n, x, 0);
    }

    return soma;
}

double gerar_inversos_adicao_de_valores_impares(int x, double soma){
    for(int n = 1; n <= 5; n++) {
        soma = soma + (1.0 / (double)x);
        x = gerar_adicao_de_valores_impares(n, x, 0);
    }

    return soma;
}

void inverte_string(char *str, int tam) {
    if(tam < 0) return;

    printf("%c\n", str[tam]);
    inverte_string(str, tam - 1);
}