#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

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


bool isBinaryString(chars s) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != '0' && s[i] != '1') {
            return false;
        }
    }
    return true;
}

int binaryToDecimal(chars s) {
    int decimal = 0;
    for (int i = 0; i < strlen(s); i++) {
        decimal = decimal * 2 + (s[i] - '0');
    }
    return decimal;
}



