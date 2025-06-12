#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "io.h"
#include "myarray.h"
#include "mymatriz.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("----------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_rec2\n");
    print("-----------------------------------------\n");
    print("\n");
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX 100

typedef int* ints;
typedef char* chars;

typedef struct s_int_Array {
    int length;
    ints data;
    int ix ;
}int_Array;


typedef int_Array* ref_int_Array;   //ref
typedef int_Matrix* ref_int_Matrix; 


ref_int_Array new_int_Array ( int n ) {
    ref_int_Array tmpArray = (ref_int_Array) malloc (sizeof(int_Array));

    if ( tmpArray == NULL ) {
        printf ( "\nERRO: Falta espaco.\n" );
    } 

    else {
        tmpArray->length = 0;
        tmpArray->data = NULL;
        tmpArray->ix = -1;

        if( n > 0 ) {  
            tmpArray->length = n;
            tmpArray->data = (ints) malloc (n * sizeof(int));
            tmpArray->ix = 0;
        } 
    } 

    return ( tmpArray );
}

void free_int_Array ( ref_int_Array tmpArray ) {
    if ( tmpArray != NULL ) {
        if ( tmpArray->data != NULL ) {
            free ( tmpArray->data );
        } 

        free ( tmpArray );
    } 
} 

void printIntArray ( ref_int_Array array ) {
    if ( array->data ) {
        for ( array->ix=0; array->ix<array->length; array->ix=array->ix+1 ) {
            printf ( "%2d: %d\n", array->ix, array->data [ array->ix ] );
        } 
    } 
}

void fprintIntArray ( chars fileName, ref_int_Array array ) { 
    FILE* arquivo = fopen ( fileName, "wt" ); 

    fprintf ( arquivo, "%d\n", array->length ); 
 
    if ( array->data ) { 
       for ( array->ix=0; array->ix<array->length; array->ix=array->ix+1 ) { 
            fprintf ( arquivo, "%d\n", array->data [ array->ix ] ); 
       } 
    } 
     
    fclose ( arquivo ); 
} 


int freadArraySize ( chars fileName ) { 
    int n = 0; 
    FILE* arquivo = fopen ( fileName, "rt" ); 

    if ( arquivo ) { 
        fscanf ( arquivo, "%d", &n ); 
 
        if ( n <= 0 ) { 
            printf( "\nERRO: Valor invalido.\n" ); 
            n = 0; 
        } 
  
        fclose ( arquivo ); 
    } 
 
    return ( n ); 
} 

ref_int_Array freadIntArray(chars fileName) {
    int n = 0;
    FILE* arquivo = fopen(fileName, "rt");

    ref_int_Array array = NULL;

    if (arquivo != NULL) {
        fscanf(arquivo, "%d", &n);

        if (n <= 0) {
            printf("\nERRO: Valor invalido.\n");
            array = new_int_Array(0);
        } else {
            array = new_int_Array(n);
            array->ix = 0;

            while (!feof(arquivo) && array->ix < array->length) {
                fscanf(arquivo, "%d", &(array->data[array->ix]));
                array->ix++;
            }
        }

        fclose(arquivo);
    }

    return array; 
}

typedef struct s_int_Matrix { 
   int    rows      ; 
   int    columns; 
   ints*  data   ; 
   int    ix,  iy ; 
}int_Matrix;

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

void method_011( void ) {
/*
    definir uma função para determinar se os valores 
    no arranjo estão em ordem decrescente; 
    - ler arranjo do arquivo DADOS1.TXT; 
    - se não estiverem, colocá-los em ordem decrescente, 
    antes de regravar os dados no arquivo CRESCENTE.TXT, 
    colocando a quantidade de elementos na primeira linha do arquivo. 
*/

    bool OK = false; 

    ref_int_Array arranjo = freadIntArray("DADOS1.txt");

    printIntArray(arranjo);

    OK = isArrayDecrescent(arranjo);

    if(OK) {
        print("O arranjo esta em ordem decrecente");
    } else {
        sortDown(arranjo);
        fprintIntArray("CRESCENTE.txt", arranjo);
        print("O arranjo foi ordernado em ordem decrescente");
    }

    footer();
}


void method_012( void ) {   // voltar
    
    /*
    FAZER um programa para: 
    - definir uma função para receber o arranjo como 
    parâmetro e inverter a ordem de seus elementos; 
    - ler arranjo do arquivo CRESCENTE.TXT; 
    - gravar o arranjo invertido no arquivo INVERTIDOS.TXT, 
    colocando a quantidade de dados elementos na primeira linha. 
    DICA: Trocar o último com o primeiro e prosseguir até a metade. 
    */

    ref_int_Array arranjo = freadIntArray("CRESCENTE.txt");
    printIntArray(arranjo);

    arrayReverse(arranjo);

    printf("\n");

    printIntArray(arranjo);

    fprintIntArray("INVERTIDOS.txt", arranjo);

    footer();
}

void method_013( void ) { // voltar

    bool OK = false; 

    double mediana = 0.0;

    ref_int_Array arranjo = freadIntArray("DADOS2.txt");

    printIntArray(arranjo);

    OK = isArrayDecrescent(arranjo);

    if(!OK) arranjo = sortDown(arranjo);

    printf("\n");

    printIntArray(arranjo);

    mediana = arrayMediana(arranjo);

    printf("%0.2lf", mediana);
        
    footer();
}


void method_014( void ) {
    /*
    - ler um    arranjo do arquivo DADOS1.TXT; 
    - ler outro arranjo do arquivo DADOS2.TXT; 
    - filtrar e mostrar os elementos comuns aos dois arranjos, sem repetições; 
    - gravar o resultado no arquivo FILTRADOS.TXT, 
    colocando a quantidade de dados únicos na primeira linha. 
    */

   //formatar melhor essa saida

    ref_int_Array arranjo1 = freadIntArray("DADOS1.txt");
    ref_int_Array arranjo2 = freadIntArray("DADOS2.txt");

    ref_int_Array arranjo_filtrado = array_filter(arranjo1, arranjo2);

    printIntArray(arranjo_filtrado);

    fprintIntArray("FILTRADOS.txt", arranjo_filtrado);

    footer();
}

void method_015( void ) {
    /*
    - ler cadeias de caracteres do arquivo BINARIOS1.TXT, uma por vez, em cada linha;
    - considerar válidos apenas sequências de valores iguais a zero ou a um;
    - converter e armazenar em um arranjo de inteiros (int);
    - supondo serem dígitos de um número binário,
    convertê-los para decimal mediante o uso de uma função.
    */

    ref_int_Array arranjo = freadIntArray("BINARIO.txt");

    int decimal = convert_binary_to_decimal(arranjo);

    printf("%d ", decimal);


    footer();
}

void method_016( void ) {


    footer();
}

void method_017( void ) {
    

    footer();
}

void method_018( void ) {
    

    footer();
}

void method_019( void ){
    

    footer();
}

void method_020( void ){
    

    footer();
}

int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento 011\n");
        printf("2  - Procedimento 012\n");
        printf("3  - Procedimento 013\n");

        printf("5  - Procedimento 015\n");
        printf("6  - Procedimento 016\n");
        printf("7  - Procedimento 017\n");

        printf("8  - Procedimento 018\n");
        printf("9  - Procedimento 019\n");
        printf("10 - Procedimento 020\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_011(); break;
            case 2:
                method_012(); break;
            case 3:
                method_013(); break;
            case 4:
                method_014(); break;
            case 5:
                method_015(); break;
            case 6:
                method_016(); break;
            case 7:
                method_017(); break;
            case 8:
                method_018(); break;
            case 9:
                method_019(); break;
            case 10:
                method_020(); break;
            case 0:
                printf("Pressione Enter para continuar...\n"); getchar();
                break;
            default:
                printf("%s", "Opcao invalida"); getchar();
                break;
        }

    } while(op != 0); 

    return 0;
}

//

// Função para gerar a matriz tridiagonal crescente
void gerarTridiagonal(int N, int matriz[100][100]) {
    int valor = N * N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ( (j == i) || (j == i-1) || (j == i+1) ) {
                matriz[i][j] = valor;
                valor--;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void gerarTridiagonalSecundaria(int N, int matriz[100][100]) {
    int valor = N * N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ( (j == (N-1)-i) || (j == (N-1)-i - 1) || (j == (N-1)-i + 1) ) {
                matriz[i][j] = valor;
                valor--;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

bool verificarPotencias(int linhas, int colunas, int matriz[100][100]) {
    for (int j = 0; j < colunas; j++) {
        int base = matriz[1][j];  // Segunda linha define a base (pois primeira linha é sempre 1)

        for (int i = 0; i < linhas; i++) {
            int esperado = (int) pow(base, i);
            if (matriz[i][j] != esperado) {
                return false;
            }
        }
    }
    return true;
}

bool verificarPotenciasDecrescentes(int linhas, int colunas, int matriz[100][100]) {
    for (int j = 0; j < colunas; j++) {
        int base = matriz[linhas-2][j];  // penúltima linha indica a base (pois última linha é sempre 1)

        for (int i = 0; i < linhas; i++) {
            int expoente = linhas - 1 - i;
            int esperado = (int) pow(base, expoente);
            if (matriz[i][j] != esperado) {
                return false;
            }
        }
    }
    return true;
}