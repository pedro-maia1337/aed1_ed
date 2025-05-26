#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define MAX 100

typedef struct Array {
    int size;
    double *data;
    int position;
} double_array;

typedef double_array *ref_double_array;

ref_double_array new_double_array(int size) {
    ref_double_array tpm_double_array = (ref_double_array) malloc(sizeof(double_array));

    if(tpm_double_array == NULL) {
        printf("Nao foi possivel alocar memoria. ");
    } else {
        tpm_double_array->size = 0;
        tpm_double_array->data = NULL;
        tpm_double_array->position = -1;

        if(size > 0) {
            tpm_double_array->size = size;
            tpm_double_array->data = (double*) malloc(size * sizeof(double));
            tpm_double_array->position = 0;
        }
    }

    return tpm_double_array;
}

void free_double_array(ref_double_array tpm_double_array) {
    if(tpm_double_array != NULL) {
        if(tpm_double_array->data != NULL) {
            free(tpm_double_array->data);
        }
        free(tpm_double_array);
    }
}

void print_double_array(ref_double_array array){
    if ( array->data ) {
        for ( array->position=0; array->position <array->size; array->position=array->position + 1 ) {
        printf ( "%2d: %lf\n", array->position, array->data [ array->position ] );
        } 
    } 
}

ref_double_array fread_double_array(char *filename) {
    FILE *file = fopen(filename, "rt");
    ref_double_array tpm_double_array = NULL;
    int n = 0;

    if(file == NULL) {
        printf("Nao foi possivel abrir o arquivo. ");
    } else {
        fscanf(file, "%d", &n);
        
        tpm_double_array = new_double_array(n);

        for(tpm_double_array->position = 0; tpm_double_array->position < tpm_double_array->size; tpm_double_array->position = tpm_double_array->position + 1) 
        {
            fscanf(file, "%lf", &tpm_double_array->data[tpm_double_array->position]);
        }
    }

    return tpm_double_array;
}

double calc_maior_distancia(ref_double_array arranjo) {
    double maior = arranjo->data[0];

    for(arranjo->position = 0; arranjo->position < arranjo->size; arranjo->position = arranjo->position + 1) 
    {
        if(maior < arranjo->data[arranjo->position] ) {
            maior = arranjo->data[arranjo->position];
        }
    }

    return maior;
}

double calc_menor_distancia(ref_double_array arranjo) {
    double menor = arranjo->data[0];

    for(arranjo->position = 0; arranjo->position < arranjo->size; arranjo->position = arranjo->position + 1) 
    {
        if(menor > arranjo->data[arranjo->position]) {
            menor = arranjo->data[arranjo->position];
        }
    }

    return menor;
}

double calc_media(ref_double_array arranjo) {
    double soma = 0.0;

    for(arranjo->position = 0; arranjo->position < arranjo->size; arranjo->position = arranjo->position + 1) 
    {
        soma = soma + arranjo->data[arranjo->position];
    }

    soma = soma - (calc_maior_distancia(arranjo) + calc_menor_distancia(arranjo));
    
    return soma / (arranjo->size - 2);
}

