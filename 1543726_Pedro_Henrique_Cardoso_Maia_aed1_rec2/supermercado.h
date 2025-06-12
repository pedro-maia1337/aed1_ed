#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef char* chars;

typedef struct s_Supermercado {
    chars nome;
    int codigo;
    float preco;
} Supermercado;

typedef Supermercado* ref_Supermercado;

ref_Supermercado new_sup(int n) {
    ref_Supermercado sup = (ref_Supermercado) malloc(n * sizeof(Supermercado));

    if (sup == NULL) {
        printf("\nERRO: Falta espaço.\n");
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        sup[i].nome = (chars) malloc(MAX * sizeof(char));
        sup[i].codigo = 0;
        sup[i].preco = 0.0;
    }

    return sup;
}

ref_Supermercado freadSupermercado(chars fileName, int* n) {
    FILE* arquivo = fopen(fileName, "r");

    if (arquivo == NULL) {
        printf("\nERRO: Nao foi possivel abrir o arquivo.\n");
        return NULL;
    }

    fscanf(arquivo, "%d", n);
    if (*n <= 0) {
        printf("\nERRO: Valor invalido.\n");
        fclose(arquivo);
        return NULL;
    }

    ref_Supermercado sup = new_sup(*n);
    if (sup == NULL) {
        fclose(arquivo);
        return NULL;
    }

    for (int i = 0; i < *n; i++) {
        fscanf(arquivo, "%s %d %f", sup[i].nome, &sup[i].codigo, &sup[i].preco);
    }

    fclose(arquivo);
    return sup;
}

void printSup(ref_Supermercado sup, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s (Codigo: %d) - Preco: %.2f\n", sup[i].nome, sup[i].codigo, sup[i].preco);
    }
}

float calc_media(ref_Supermercado sup, int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += sup[i].preco;
    }
    return soma / n;
}

void abaixo_media(ref_Supermercado sup, int n, float media) {
    int contador = 0;
    printf("\nSupermercados com preco abaixo da media:\n");
    for (int i = 0; i < n; i++) {
        if (sup[i].preco < media) {
            printf("%s (Codigo: %d) - Preco: %.2f\n", sup[i].nome, sup[i].codigo, sup[i].preco);
            contador++;
        }
    }
    
    if (contador < 2) {
        printf("\nMenos de dois supermercados estao abaixo da media.\n");
    }
}


void free_sup(ref_Supermercado sup, int n) {
    if (sup != NULL) {
        for (int i = 0; i < n; i++) {
            free(sup[i].nome);
        }
        free(sup);
    }
}
