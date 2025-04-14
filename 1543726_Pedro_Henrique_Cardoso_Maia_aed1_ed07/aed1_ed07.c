#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void gravar_numeros_multiplos_de_quatro(int n) {
    int x = 4;
    int multiplo = 0;

    FILE *arquivo = fopen("resultado01.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado01.txt.\n");
        return;
    }

    for(int i = 1; i <= n; i++){
        multiplo = x * i;
        fprintf(arquivo, "%d ", multiplo);
    }

    fprintf(arquivo, "\n");
}

void gravar_numeros_multiplos_de_quinze(int n) {
    int multiplo = 15 * (2 * n);

    FILE *arquivo = fopen("resultado02.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    for(int i = 1; i <= n; i++){
        fprintf(arquivo, "%d ", multiplo);
        multiplo = multiplo - 30;
    }

    fprintf(arquivo, "\n");
}


void gravar_potencia_de_tres(int n) {
    int x = 3;
    int resultado = 0;

    FILE *arquivo = fopen("resultado03.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    for(int i = 0; i < n; i++){
        resultado = pow((double) x, (double) i);
        fprintf(arquivo, "%d ", resultado);
    }

    fprintf(arquivo, "\n");
}

void gravar_inverso_potencia_de_tres(int n) {
    int x = 3;
    double resultado = 0.0; 

    FILE *arquivo = fopen("resultado04.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    for(int i = n - 1; i >= 0; i--){
        resultado = 1.0 / pow((double) x, (double) i);
        fprintf(arquivo, "%lf ", resultado);
    }

    fprintf(arquivo, "\n");
}

void gravar_inverso_potencia(int n, int x) {
    double resultado = 0.0; 
    int pot = 1;

    FILE *arquivo = fopen("resultado05.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    fprintf(arquivo, "%d ", pot);

    for(int i = 1; i < n; i++){
        pot = pot + 2;
        resultado = 1.0 / pow((double) x, (double) pot);
        fprintf(arquivo, "%lf ", resultado);
    }

    fprintf(arquivo, "\n");
}