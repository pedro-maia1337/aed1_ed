#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef char* chars;

typedef struct s_Supermercado {
    int qtd;
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

ref_Supermercado freadSupermercado(chars fileName) {
    int n = 0;
    FILE* arquivo = fopen(fileName, "r");

    if (arquivo == NULL) {
        printf("\nERRO: Não foi possível abrir o arquivo.\n");
        return NULL;
    }

    fscanf(arquivo, "%d", &n);
    if (n <= 0) {
        printf("\nERRO: Valor inválido.\n");
        fclose(arquivo);
        return NULL;
    }

    ref_Supermercado sup = new_sup(n);
    if (sup == NULL) {
        fclose(arquivo);
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        fscanf(arquivo, "%s %d %f", sup[i].nome, &sup[i].codigo, &sup[i].preco);
    }

    fclose(arquivo);
    return sup;
}

void printSup ( ref_Supermercado sup ) {
    for(int i = 0; i < sup->qtd; i++) {
        printf("%s (Codigo: %d) - Preco: %.2f\n", sup[i].nome, sup[i].codigo, sup[i].preco);
    }
    
}
