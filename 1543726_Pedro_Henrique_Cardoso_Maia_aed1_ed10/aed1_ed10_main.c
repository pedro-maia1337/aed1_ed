#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "io.h"
#include <stdbool.h>
#include <time.h>

#define MAX 100

void cabecalho() {
    system("cls");
    print("----------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_ed10\n");
    print("-----------------------------------------\n");
    print("\n");
}

typedef int* ints;
typedef char* chars;

typedef struct s_int_Array {
    int length;
    ints data;
    int ix ;
}int_Array;

typedef struct s_int_Matrix { 
   int    rows      ; 
   int    columns; 
   ints*  data   ; 
   int    ix,  iy ; 
}int_Matrix;

typedef int_Array* ref_int_Array; //ref
typedef int_Matrix* ref_int_Matrix; //ref

ref_int_Array new_int_Array ( int n ) {
    ref_int_Array tmpArray = (ref_int_Array) malloc (sizeof(int_Array));

    if ( tmpArray == NULL ) {
        print ( "\nERRO: Falta espaco.\n" );
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

void printIntArray ( int_Array array ) {
    if ( array.data ) {
        for ( array.ix=0; array.ix<array.length; array.ix=array.ix+1 ) {
            printf ( "%2d: %d\n", array.ix, array.data [ array.ix ] );
        } 
    } 
} 

void fprintIntArray ( chars fileName, int_Array array ) { 
    FILE* arquivo = fopen ( fileName, "wt" ); 

    fprintf ( arquivo, "%d\n", array.length ); 
 
    if ( array.data ) { 
       for ( array.ix=0; array.ix<array.length; array.ix=array.ix+1 ) { 
            fprintf ( arquivo, "%d\n", array.data [ array.ix ] ); 
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
            print( "\nERRO: Valor invalido.\n" ); 
            n = 0; 
        } 
  
        fclose ( arquivo ); 
    } 
 
    return ( n ); 
} 

int_Array freadIntArray(chars fileName) {
    int n = 0;
    FILE* arquivo = fopen(fileName, "rt");

    ref_int_Array array = NULL;

    if (arquivo != NULL) {
        fscanf(arquivo, "%d", &n);

        if (n <= 0) {
            print("\nERRO: Valor invalido.\n");
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

    return *array; 
}

int RandomIntGenerate ( int inferior, int superior ) { 

    srand(time(NULL));

    int random = 0;

    random = inferior + (rand() % (superior - inferior + 1));

    return random;
}

bool arraySearch(int valor, int_Array arranjo) {
    for (int i = 0; i < arranjo.length; i++) {
        if (arranjo.data[i] == valor) {
            return true;
        }
    }
    return false;
}

bool arrayCompare(int_Array arranjo1, int_Array arranjo2) {
    if(arranjo1.length == arranjo2.length) {
        for (int i = 0; i < arranjo1.length; i++) {
            if (arranjo1.data[i] != arranjo2.data[i]) {
                return false;
            }
        }
    } else {
        return false;
    }

    return true;
}

ref_int_Array arrayAdd(int_Array arranjo1, int constante, int_Array arranjo2 ) {
    if(arranjo1.length != arranjo2.length) {
        print("Arranjo de tamanhos diferentes.\n");
        return new_int_Array(0);
    } 

    ref_int_Array result = new_int_Array(arranjo1.length);

    for (int i = 0; i < arranjo1.length; i++) {
        result->data[i] = arranjo1.data[i] + (arranjo2.data[i] * constante);
    }

    return result;
}

bool isArrayDecrescent(int_Array arranjo) {
    for (int i = 0; i < arranjo.length; i++) {
        if (arranjo.data[i] < arranjo.data[i + 1]) {
            return false;
        }
    }

    return true;
}

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
       print ( "\nERRO: Valor invalido.\n" ); 
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
        print("Matrizes com tamanhos diferentes.\n");
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
        print("Matrizes com tamanhos diferentes.\n");
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


void method_0811( void ) {
/*
    gerar um valor inteiro aleatoriamente dentro de um intervalo,
    cujos limites de início e de fim serão recebidos como parâmetros.
    Para para testar, ler os limites do intervalo do teclado;
    ler a quantidade de elementos ( N ) a serem gerados;
    gerar essa quantidade ( N ) de valores aleatórios
    dentro do intervalo e armazená-los em arranjo;
    gravá-los, um por linha, em um arquivo ("DADOS.TXT").
    A primeira linha do arquivo deverá informar a quantidade
    de números aleatórios ( N ) que serão gravados em seguida.
    DICA: Usar a função rand( ), mas tentar limitar valores maiores ou iguais a 106
    Exemplo: valor = RandomIntGenerate ( inferior, superior );
*/

    int inicio = 0;
    int fim = 0;
    int n = 0;
    char str[MAX] = "DADOS.txt";

    n = readint("Insira a quantidade de elementos a serem gerados: ");

    inicio = readint("Insira o inicio do intervalo: ");
    fim = readint("Insira o final do intervalo: ");

    ref_int_Array array = new_int_Array(n);
    
    for(int i = 0; i < array->length; i++){
        array->data[i] = RandomIntGenerate(inicio, fim);
    }

    fprintIntArray(str, *array);

    free ( array->data );

    footer();

}


void method_0812( void ) {   
/*  procurar certo valor inteiro em um arranjo.
    Para testar, receber um nome de arquivo como parâmetro e
    aplicar a função sobre o arranjo com os valores lidos.
    DICA: Usar o modelo de arranjo proposto nos exemplos.
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
    resposta = arraySearch ( valor, arranjo );
*/
    bool resposta = false;
    int valor = 0;

    valor = readint("Digite o valor que deseja procurar no arranjo: ");
    
    int_Array arranjo = freadIntArray( "DADOS.TXT" );

    resposta = arraySearch(valor, arranjo);

    if (resposta) {
        printf("Valor: %d Encontrado.\n", valor);
    } else {
        printf("Valor: %d Nao Encontrado.\n", valor);
    }

    footer();
}

void method_0813( void ) {
    /*
    operar a comparação de dois arranjos.
    Para testar, receber dados de arquivos e
    aplicar a função sobre os arranjos com os valores lidos.
    DICA: Verificar se, e somente se, os tamanhos forem iguais.
    Usar o modelo de arranjo proposto nos exemplos.
    Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
    arranjo2 = readArrayFromFile ( "DADOS2.TXT" );
    resposta = arrayCompare ( arranjo1, arranjo2 );
    */

    bool resposta = false;
    int_Array arranjo1 = freadIntArray( "DADOS1.txt" );
    int_Array arranjo2 = freadIntArray( "DADOS2.txt" );

    resposta = arrayCompare( arranjo1, arranjo2);

    if (resposta) {
        printf("Os arranjos sao iguais.\n");
    } else {
        printf("Os arranjos NAO sao iguais.\n");
    }

    footer();
}


void method_0814( void ) {
    /*
    operar a soma de dois arranjos, com os elementos do segundo multiplicados por uma constante.
    Para testar, receber dados de arquivos e 
    aplicar a função sobre os arranjos com os valores lidos;
    DICA: Verificar se os tamanhos são compatíveis.
    Usar o modelo de arranjo proposto nos exemplos.
    Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
    arranjo2 = readArrayFromFile ( "DADOS2.TXT" );
    soma = arrayAdd ( arranjo1, 1, arranjo2 );
    */

    int_Array arranjo1 = freadIntArray( "DADOS1.txt" );
    int_Array arranjo2 = freadIntArray( "DADOS2.txt" );

    ref_int_Array soma = arrayAdd ( arranjo1, 1, arranjo2 );

    print("\nResultado da soma:\n");
    printIntArray(*soma);

    free_int_Array(soma);

    footer();
}

void method_0815( void ) {
    /*
    dizer se um arranjo está em ordem decrescente.
    Para testar, receber um nome de arquivo como parâmetro e
    aplicar a função sobre o arranjo com os valores lidos.
    DICA: Usar o modelo de arranjo proposto nos exemplos.
    Não usar break!
    Exemplo: arranjo1 = readArrayFromFile ( "DADOS1.TXT" );
    resposta = isArrayDecrescent ( arranjo );
    */
   bool resposta = false;
   int_Array arranjo = freadIntArray( "DADOS3.txt" );

   resposta = isArrayDecrescent ( arranjo );

    if (resposta) {
        printf("O arranjo esta em ordem decrescente.\n");
    } else {
        printf("Os arranjos NAO esta em ordem decrescente.\n");
    }

    footer();
}

void method_0816( void ) {
/*
    obter a transposta de uma matriz.
    Para testar, receber dados de arquivos e
    aplicar a função sobre as matrizes com os valores lidos.
    DICA: Verificar se os tamanhos são compatíveis.
    Usar o modelo de matriz proposto nos exemplos.
    Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" );
    matriz2 = matrixTranspose ( matriz1 );
*/

    ref_int_Matrix matriz1 = freadintMatrix("DADOS4.txt");

    ref_int_Matrix transposta = matrixTranspose(matriz1);

    if (transposta != NULL) {
        print("\nMatriz transposta:\n");
        for (int i = 0; i < transposta->rows; i++) {
            for (int j = 0; j < transposta->columns; j++) {
                printf("%d ", transposta->data[i][j]);
            }
            printf("\n");
        }
    }

    footer();
}

void method_0817( void ) {
    /*
    testar se uma matriz só contém valores iguais a zero. 
    Para testar, receber dados de arquivos e  
    aplicar a função sobre as matrizes com os valores lidos. 
    DICA: Verificar se os tamanhos são compatíveis. 
    Usar o modelo de matriz proposto nos exemplos. 
 
    Exemplo: matriz1   = readMatrixFromFile ( "DADOS1.TXT" ); 
    resposta = matrixZero  ( matriz1 );    
    */
    bool resposta = false;

    ref_int_Matrix mat = freadintMatrix( "DADOS4.txt" );

    resposta = matrixZero( mat );

    if (resposta) {
        printf("A matrix so contem zero.\n");
    } else {
        printf("A matrix contem valores diferentes de zero.\n");
    }

    footer();
}

void method_0818( void ) {
    /*
    testar a igualdade de duas matrizes. 
    Para testar, receber dados de arquivos e  
    aplicar a função sobre as matrizes com os valores lidos. 
    DICA: Verificar se os tamanhos são compatíveis. 
    Usar o modelo de matriz proposto nos exemplos. 
    
    Exemplo: matriz1   = readMatrixFromFile ( "DADOS1.TXT" ); 
    matriz2   = readMatrixFromFile  ( "DADOS2.TXT" ); 
    resposta = matrixCompare        ( matriz1, matriz2 );
    */

    bool resposta = false;

    ref_int_Matrix matriz1 = freadintMatrix("DADOS4.txt");
    ref_int_Matrix matriz2 = freadintMatrix("DADOS5.txt");

    resposta = matrixCompare(matriz1, matriz2);

    if (resposta) {
        print("\nAs matrizes sao iguais.\n");
    } else {
        print("\nAs matrizes sao diferentes.\n");
    }

    footer();
}

void method_0819( void ){
    /*
    Incluir uma função (1019) para 
    operar a soma de duas matrizes, com os elementos da segunda multiplicados por uma constante. 
    Para testar, receber dados de arquivos e  
    aplicar a função sobre as matrizes com os valores lidos. 
    DICA: Verificar se os tamanhos são compatíveis. 
    Usar o modelo de matriz proposto nos exemplos. 
 
    Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" ); 
    matriz2 = readMatrixFromFile ( "DADOS2.TXT" ); 
    soma    = matrixAdd   ( matriz1, -1, matriz2 );
    */

    ref_int_Matrix matriz1 = freadintMatrix("DADOS4.txt");
    ref_int_Matrix matriz2 = freadintMatrix("DADOS5.txt");

    ref_int_Matrix resultado = matrixAdd(matriz1, 1, matriz2);

    if (resultado != NULL) {
        print("\nResultado da soma:\n");
        for (int i = 0; i < resultado->rows; i++) {
            for (int j = 0; j < resultado->columns; j++) {
                printf("%d ", resultado->data[i][j]);
            }
            printf("\n");
        }
    }

    footer();
}

void method_0820( void ){
    /*
    Para testar, receber dados de arquivos e  
    aplicar a função sobre as matrizes com os valores lidos. 
    DICA: Verificar se os tamanhos são compatíveis. 
          Usar o modelo de matriz proposto nos exemplos. 
 
    Exemplo: matriz1 = readMatrixFromFile ( "DADOS1.TXT" ); 
    matriz2 = readMatrixFromFile ( "DADOS2.TXT" ); 
    soma    = matrixProduct          ( matriz1, matriz2 );
    */
    ref_int_Matrix matriz1 = freadintMatrix("DADOS4.TXT");
    ref_int_Matrix matriz2 = freadintMatrix("DADOS5.TXT");

    ref_int_Matrix resultado = matrixProduct(matriz1, matriz2);

    if (resultado != NULL) {
        print("\nProduto das matrizes:\n");
        for (int i = 0; i < resultado->rows; i++) {
            for (int j = 0; j < resultado->columns; j++) {
                printf("%d ", resultado->data[i][j]);
            }
            printf("\n");
        }
    }

    footer();
}

int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento 0811\n");
        printf("2  - Procedimento 0812\n");
        printf("3  - Procedimento 0813\n");
        printf("4  - Procedimento 0814\n");

        printf("5  - Procedimento 0815\n");
        printf("6  - Procedimento 0816\n");
        printf("7  - Procedimento 0817\n");

        printf("8  - Procedimento 0818\n");
        printf("9  - Procedimento 0819\n");
        printf("10 - Procedimento 0820\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_0811(); break;
            case 2:
                method_0812(); break;
            case 3:
                method_0813(); break;
            case 4:
                method_0814(); break;
            case 5:
                method_0815(); break;
            case 6:
                method_0816(); break;
            case 7:
                method_0817(); break;
            case 8:
                method_0818(); break;
            case 9:
                method_0819(); break;
            case 10:
                method_0820(); break;
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