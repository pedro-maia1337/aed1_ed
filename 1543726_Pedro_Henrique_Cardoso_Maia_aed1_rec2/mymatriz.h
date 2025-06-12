#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX 100

typedef int* ints;
typedef char* chars;

typedef struct s_int_Matrix { 
   int    rows      ; 
   int    columns; 
   ints*  data   ; 
   int    ix,  iy ; 
}int_Matrix;

typedef int_Matrix* ref_int_Matrix; 

ref_int_Matrix new_int_Matrix ( int rows, int columns ) { 
    ref_int_Matrix tmpMatrix = (ref_int_Matrix) malloc (sizeof(int_Matrix)); 
 
    if ( tmpMatrix != NULL ) { 
       tmpMatrix->rows      = 0; 
       tmpMatrix->columns   = 0; 
       tmpMatrix->data      = NULL; 
     
       if ( rows > 0 && columns > 0 ) { 
        tmpMatrix->rows    = rows; 
        tmpMatrix->columns = columns; 
        tmpMatrix->data    = malloc (rows * sizeof(ints)); 
            if ( tmpMatrix->data ) { 
                for ( tmpMatrix->ix=0; tmpMatrix->ix<tmpMatrix->rows; tmpMatrix->ix=tmpMatrix->ix+1){ 
                    tmpMatrix->data [ tmpMatrix->ix ] = (ints) malloc (columns * sizeof(int)); 
                }
            }
        }

        tmpMatrix->ix  = 0; 
        tmpMatrix->iy  = 0; 
    } 
   
   return ( tmpMatrix ); 
}

void free_int_Matrix ( ref_int_Matrix matrix ) { 
    if ( matrix != NULL ) { 
       if ( matrix->data != NULL ) { 
            for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 ) { 
                    free ( matrix->data [ matrix->ix ] ); 
            } 
            free ( matrix->data ); 
        } 
        free ( matrix ); 
    } 
}
 
void printIntMatrix ( ref_int_Matrix matrix ) { 
    if ( matrix != NULL && matrix->data != NULL ) { 
        for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 ) { 
            for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 ) { 
                printf ( "%3d\t", matrix->data [ matrix->ix ][ matrix->iy ] ); 
            } 
            printf ( "\n" ); 
        } 
    } 
} 

void fprintIntMatrix ( chars fileName, ref_int_Matrix matrix ) { 
    FILE* arquivo = fopen ( fileName, "wt" ); 

    if ( matrix == NULL ) { 
       printf ( "\nERRO: Nao ha' dados." ); 
    } 
    else { 
        fprintf ( arquivo, "%d\n", matrix->rows       ); 
        fprintf ( arquivo, "%d\n", matrix->columns ); 
         
        if ( matrix->data != NULL ) { 
            for ( matrix->ix=0; matrix->ix<matrix->rows; matrix->ix=matrix->ix+1 ) { 
               for ( matrix->iy=0; matrix->iy<matrix->columns; matrix->iy=matrix->iy+1 ) {  
                   fprintf ( arquivo, "%d\n", matrix->data [ matrix->ix ][ matrix->iy ] ); 
               } 
            }  
        } 
        fclose ( arquivo ); 
    } 
} 

ref_int_Matrix freadintMatrix ( chars fileName ) { 
    ref_int_Matrix matrix = NULL; 
    int      rows    = 0; 
    int      columns = 0; 
    FILE*    arquivo    = fopen ( fileName, "rt" ); 

    fscanf ( arquivo, "%d", &rows       ); 
    fscanf ( arquivo, "%d", &columns    ); 
    if ( rows <= 0 || columns <= 0 ) { 
       printf ( "\nERRO: Valor invalido.\n" ); 
    }  else { 
        matrix = new_int_Matrix ( rows, columns ); 

        if ( matrix != NULL && matrix->data == NULL ) { 
            matrix->rows    = 0; 
            matrix->columns = 0; 
            matrix->ix      = 0; 
            matrix->iy      = 0; 
        } else { 
            if ( matrix != NULL ) { 
                matrix->ix = 0; 
                while ( ! feof ( arquivo ) && matrix->ix < matrix->rows ) { 
                    matrix->iy = 0; 
                    while ( ! feof ( arquivo ) && matrix->iy < matrix->columns ) { 
                        fscanf ( arquivo, "%d", &(matrix->data [ matrix->ix ][ matrix->iy ]) ); 
                        matrix->iy = matrix->iy+1; 
                    } 
                    matrix->ix = matrix->ix+1; 
                } 
                matrix->ix = 0; 
                matrix->iy = 0; 
           } 
        } 
    } 
    return ( matrix ); 
} 

bool matrixZero ( ref_int_Matrix matriz ){
    for (int i = 0; i < matriz->rows; i++) {
        for (int j = 0; j < matriz->columns; j++) {
            if (matriz->data[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

bool matrixCompare( ref_int_Matrix matriz1, ref_int_Matrix matriz2) {
    if (matriz1->rows != matriz2->rows || matriz1->columns != matriz2->columns) {
        return false;
    }

    for (int i = 0; i < matriz1->rows; i++) {
        for (int j = 0; j < matriz1->columns; j++) {
            if (matriz1->data[i][j] != matriz2->data[i][j]) {
                return false;
            }
        }
    }

    return true;
}

ref_int_Matrix matrixAdd(ref_int_Matrix matriz1, int constante, ref_int_Matrix matriz2) {
    if (matriz1->rows != matriz2->rows || matriz1->columns != matriz2->columns) {
        printf("Matrizes com tamanhos diferentes.\n");
        return NULL;
    }

    ref_int_Matrix resultado = new_int_Matrix(matriz1->rows, matriz1->columns);

    for (int i = 0; i < resultado->rows; i++) {
        for (int j = 0; j < resultado->columns; j++) {
            resultado->data[i][j] = matriz1->data[i][j] + constante * matriz2->data[i][j];
        }
    }

    return resultado;
}

ref_int_Matrix matrixProduct(ref_int_Matrix matriz1, ref_int_Matrix matriz2) {
    if (matriz1->columns != matriz2->rows) {
        printf("Matrizes com tamanhos diferentes.\n");
        return NULL;
    }

    ref_int_Matrix resultado = new_int_Matrix(matriz1->rows, matriz2->columns);

    for (int i = 0; i < resultado->rows; i++) {
        for (int j = 0; j < resultado->columns; j++) {
            resultado->data[i][j] = 0;
        }
    }

    for (int i = 0; i < matriz1->rows; i++) {
        for (int j = 0; j < matriz2->columns; j++) {
            for (int k = 0; k < matriz1->columns; k++) {
                resultado->data[i][j] += matriz1->data[i][k] * matriz2->data[k][j];
            }
        }
    }

    return resultado;
}

ref_int_Matrix matrixTranspose(ref_int_Matrix matriz) {
    ref_int_Matrix transposta = new_int_Matrix(matriz->columns, matriz->rows);

    for (int i = 0; i < matriz->rows; i++) {
        for (int j = 0; j < matriz->columns; j++) {
            transposta->data[j][i] = matriz->data[i][j];
        }
    }

    return transposta;
}

void tridiagonalCrescente(ref_int_Matrix matriz) {
    int valor = 1;
    for (int i = 0; i < matriz->rows; i++) {
        for (int j = 0; j < matriz->columns; j++) {
            if (j == i || j == i - 1 || j == i + 1) {
                matriz->data[i][j] = valor++;
            } else {
                matriz->data[i][j] = 0;
            }
        }
    }
}

// Função para gerar a nova matriz quadrada com x linhas e colunas, preenchendo com dados antigos e zero
ref_int_Matrix gerarNovaMatriz(ref_int_Matrix original, int x) {
    ref_int_Matrix nova = new_int_Matrix(x, x);
    int contador = 0;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (contador < (original->rows * original->columns)) {
                int linha = contador / original->columns;
                int coluna = contador % original->columns;
                nova->data[i][j] = original->data[linha][coluna];
                contador++;
            } else {
                nova->data[i][j] = 0;
            }
        }
    }

    return nova;
}

void tridiagonalSecundariaDecrescente(ref_int_Matrix matriz) {
    int n = matriz->rows;
    int valor = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j == n - 1) || (i + j == n - 2) || (i + j == n)) {
                matriz->data[i][j] = valor++;
            } else {
                matriz->data[i][j] = 0;
            }
        }
    }
}

bool verificarPotencias(ref_int_Matrix matriz) {
    for (int j = 0; j < matriz->columns; j++) {
        int base = matriz->data[1][j];  // Segunda linha define a base (pois primeira linha é sempre 1)

        for (int i = 0; i < matriz->rows; i++) {
            int esperado = (int) pow(base, i);
            if (matriz->data[i][j] != esperado) {
                return false;
            }
        }
    }
    return true;
}

bool verificarPotenciasDecrescentes(ref_int_Matrix matriz) {
    for (int j = 0; j < matriz->columns; j++) {
        int base = matriz->data[matriz->rows - 2][j];  // penúltima linha indica a base (última linha é sempre 1)

        for (int i = 0; i < matriz->rows; i++) {
            int expoente = matriz->rows - 1 - i;
            int esperado = (int) pow(base, expoente);
            if (matriz->data[i][j] != esperado) {
                return false;
            }
        }
    }
    return true;
}
