#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct Matriz {
    int rows;
    int columns;
    double **data;
    int ix, iy;
} double_matriz;

typedef double_matriz *ref_double_matriz;

ref_double_matriz new_double_matriz(int rows, int columns) {
    ref_double_matriz tpm_matriz = (ref_double_matriz) malloc(sizeof(double_matriz));

    if(tpm_matriz == NULL) {
        printf("Nao foi possivel armazenar a matriz. ");
    } else {
        tpm_matriz->rows = 0;
        tpm_matriz->columns = 0;
        tpm_matriz->data = NULL;

        if(rows > 0 && columns > 0) {
            tpm_matriz->rows = rows;
            tpm_matriz->rows = columns;
            tpm_matriz->data = (double**) malloc(rows * sizeof(double));

            if(tpm_matriz->data) {
                for(tpm_matriz->ix = 0; tpm_matriz->ix <
 tpm_matriz->rows; tpm_matriz->ix= tpm_matriz->ix + 1 ) {
                    tpm_matriz->data[tpm_matriz->ix] = (double*) malloc(columns * sizeof(double));                }
            }
        }
        
        tpm_matriz->ix = 0;
        tpm_matriz->iy = 0;
    }

    return tpm_matriz;
}

void printDoubleMatriz ( ref_double_matriz matrix ) {
    if ( matrix != NULL && matrix->data != NULL ) {
        for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 ) {
            for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 ) {
                printf ( "%lf\t", matrix->data [ matrix->ix ][ matrix->iy ] );
            } 
            printf ( "\n" );
        } 
    } 
}

ref_double_matriz fread_double_matriz(char *filename){

    //definir dados locais
    FILE *file = fopen(filename, "rt");
    int rows = 0;
    int columns = 2;
    ref_double_matriz matriz = NULL;

    fscanf(file, "%d", &rows);

    if(rows <= 0 || columns <= 0) {
        printf("Valor invalido");
    } else {
        matriz = new_double_matriz(rows, columns);

        if(matriz != NULL) {
            matriz->ix = 0;
            while(!feof(file) || matriz->ix < matriz->rows) {
                matriz->iy = 0;
                while (!feof(file) || matriz->iy < matriz->columns) {
                    fscanf(file, "%lf", &(matriz->data[matriz->ix][matriz->iy]));
                    matriz->iy = matriz->iy + 1;
                }
                matriz->ix = matriz->ix + 1;
            }
            matriz->ix = 0;
            matriz->iy = 0;
        }
    }

    return matriz;
}
