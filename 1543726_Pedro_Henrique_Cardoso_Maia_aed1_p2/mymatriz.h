#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

typedef struct int_matriz {
    int rows;
    int columns;
    int **data;
    int ix, iy;
} int_matriz;

typedef int_matriz *ref_int_matriz;

/*ref_int_matriz new_int_matriz(int rows, int columns) {
    ref_int_matriz matriz = (ref_int_matriz) malloc(sizeof(int_matriz));

    if(matriz == NULL) {
        printf("Nao foi possivel alocar a matriz");
    } else {
        matriz->rows = 0;
        matriz->columns = 0;
        matriz->data = NULL;

        if(rows > 0 && columns > 0) {

            matriz->rows = rows;
            matriz->columns = columns;
            matriz->data = (int**) malloc(rows * sizeof(int));

            if(matriz->data) {
                for(matriz->iy = 0; matriz->iy < rows; matriz->iy=matriz->iy+1){
                    matriz->data[matriz->iy] = (int*) malloc(columns * sizeof(int));
                }
            } 
        }

        matriz->ix = 0;
        matriz->iy = 0;

        return matriz;
    }
}

void printIntMatriz ( ref_int_matriz matrix ) {
    if ( matrix != NULL && matrix->data != NULL ) {
        for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 ) {
            for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 ) {
                printf ( "%3d\t", matrix->data [ matrix->ix ][ matrix->iy ] );
            } 
            printf ( "\n" );
        } 
    } 
}*/

