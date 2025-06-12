#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define STR_MAX 100

typedef char* chars;
typedef chars* strings;

typedef struct s_string_Array {
    int length;
    strings data;
    int ix;
} string_Array;

typedef string_Array* ref_string_Array;

// Função para alocar array de strings
ref_string_Array new_string_Array(int n) {
    ref_string_Array tmpArray = (ref_string_Array) malloc(sizeof(string_Array));

    if (tmpArray == NULL) {
        printf("\nERRO: Falta espaco.\n");
    } else {
        tmpArray->length = 0;
        tmpArray->data = NULL;
        tmpArray->ix = -1;

        if (n > 0) {
            tmpArray->length = n;
            tmpArray->data = (strings) malloc(n * sizeof(chars));
            tmpArray->ix = 0;

            for (int i = 0; i < n; i++) {
                tmpArray->data[i] = (chars) malloc(STR_MAX * sizeof(char));
            }
        }
    }

    return tmpArray;
}

// Função para liberar memória
void free_string_Array(ref_string_Array tmpArray) {
    if (tmpArray != NULL) {
        if (tmpArray->data != NULL) {
            for (int i = 0; i < tmpArray->length; i++) {
                free(tmpArray->data[i]);
            }
            free(tmpArray->data);
        }
        free(tmpArray);
    }
}

// Função para imprimir array de strings
void printStringArray(ref_string_Array array) {
    if (array->data) {
        for (array->ix = 0; array->ix < array->length; array->ix++) {
            printf("%2d: %s\n", array->ix, array->data[array->ix]);
        }
    }
}

// Função para salvar array de strings em arquivo
void fprintStringArray(chars fileName, ref_string_Array array) {
    FILE* arquivo = fopen(fileName, "wt");

    fprintf(arquivo, "%d\n", array->length);

    if (array->data) {
        for (array->ix = 0; array->ix < array->length; array->ix++) {
            fprintf(arquivo, "%s\n", array->data[array->ix]);
        }
    }

    fclose(arquivo);
}

// Função para ler o tamanho do array de strings a partir do arquivo
int freadArraySize(chars fileName) {
    int n = 0;
    FILE* arquivo = fopen(fileName, "rt");

    if (arquivo) {
        fscanf(arquivo, "%d", &n);

        if (n <= 0) {
            printf("\nERRO: Valor invalido.\n");
            n = 0;
        }

        fclose(arquivo);
    }

    return n;
}

// Função para ler o array de strings do arquivo
ref_string_Array freadStringArray(chars fileName) {
    int n = 0;
    FILE* arquivo = fopen(fileName, "rt");

    ref_string_Array array = NULL;

    if (arquivo != NULL) {
        fscanf(arquivo, "%d", &n);

        if (n <= 0) {
            printf("\nERRO: Valor invalido.\n");
            array = new_string_Array(0);
        } else {
            array = new_string_Array(n);
            array->ix = 0;

            while (!feof(arquivo) && array->ix < array->length) {
                fscanf(arquivo, "%s", array->data[array->ix]);
                array->ix++;
            }
        }

        fclose(arquivo);
    }

    return array;
}
