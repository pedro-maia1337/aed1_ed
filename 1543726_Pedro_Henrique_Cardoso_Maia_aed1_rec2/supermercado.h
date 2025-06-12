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

// Função para alocar memória
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

// Função para ler do arquivo
ref_Supermercado freadSupermercado(chars fileName, int* n) {
    FILE* arquivo = fopen(fileName, "r");

    if (arquivo == NULL) {
        printf("\nERRO: Não foi possível abrir o arquivo.\n");
        return NULL;
    }

    fscanf(arquivo, "%d", n);
    if (*n <= 0) {
        printf("\nERRO: Valor inválido.\n");
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

// Função para imprimir os dados
void printSup(ref_Supermercado sup, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s (Codigo: %d) - Preco: %.2f\n", sup[i].nome, sup[i].codigo, sup[i].preco);
    }
}

// Função para calcular a média
float calcularMedia(ref_Supermercado sup, int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += sup[i].preco;
    }
    return soma / n;
}

// Função para mostrar supermercados com preço inferior à média
void abaixoDaMedia(ref_Supermercado sup, int n, float media) {
    int contador = 0;
    printf("\nSupermercados com preço abaixo da média:\n");
    for (int i = 0; i < n; i++) {
        if (sup[i].preco < media) {
            printf("%s (Codigo: %d) - Preco: %.2f\n", sup[i].nome, sup[i].codigo, sup[i].preco);
            contador++;
        }
    }
    
    if (contador < 2) {
        printf("\nATENÇÃO: Menos de dois supermercados estão abaixo da média.\n");
    }
}

// Função para liberar memória
void free_sup(ref_Supermercado sup, int n) {
    if (sup != NULL) {
        for (int i = 0; i < n; i++) {
            free(sup[i].nome);
        }
        free(sup);
    }
}
