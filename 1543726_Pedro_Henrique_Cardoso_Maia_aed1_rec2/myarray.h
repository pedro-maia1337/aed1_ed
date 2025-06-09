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


typedef int_Array* ref_int_Array; //ref

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
        printf("Arranjo de tamanhos diferentes.\n");
        return new_int_Array(0);
    } 

    ref_int_Array result = new_int_Array(arranjo1.length);

    for (int i = 0; i < arranjo1.length; i++) {
        result->data[i] = arranjo1.data[i] + (arranjo2.data[i] * constante);
    }

    return result;
}

bool isArrayDecrescent(ref_int_Array arranjo) {
    for (int i = 0; i < arranjo->length; i++) {
        if (arranjo->data[i] < arranjo->data[i + 1]) {
            return false;
        }
    }

    return true;
}

ref_int_Array sortDown(ref_int_Array arranjo) {
    int aux = 0;
    for(int i = 0; i < arranjo->length; i++){
        for(int x = 0; x < arranjo->length - 1; x=x+1){
             if(arranjo->data[x] > arranjo->data[x + 1]){
                aux = arranjo->data[x];
                arranjo->data[x] = arranjo->data [x + 1];
                arranjo->data[x + 1] = aux;
            }
        }
    }

    return arranjo;
}

void arrayReverse(ref_int_Array arranjo) { 
    // {1, 2, 3, 4}
    // {4, 3, 2, 1}

    int inicio = 0;
    int fim = arranjo->length - 1;

    while (inicio < fim) {
        int temp = arranjo->data[inicio];
        arranjo->data[inicio] = arranjo->data[fim];
        arranjo->data[fim] = temp;
        inicio++;
        fim--;
    }
}


double arrayMediana(ref_int_Array arranjo) { // voltar ????
    int metade = 0;

    metade = arranjo->length / 2;

    if(metade % 2 == 0) {
        return arranjo->data[metade];
    }

    return ((arranjo->data[metade] + arranjo->data[metade + 1]) / 2);
}

ref_int_Array array_filter(ref_int_Array arranjo1, ref_int_Array arranjo2) {

    ref_int_Array array = NULL;

    int count = 0;
    int dado = 0;
    int idx = 0;

    for(int i = 0; i < arranjo1->length; i++){
        if(arranjo1->data[i] == arranjo2->data[i]){
            dado = arranjo1->data[i];
            if(dado != arranjo1->data[i + 1]) { // número de dados repetidos
                count = count + 1;
            }
        }
    }

    array = new_int_Array(count); //alocando novo array com a quantidade itens filtrados

    for(int i = 0; i < arranjo1->length; i++){
        if(arranjo1->data[i] == arranjo2->data[i]){
            dado = arranjo1->data[i];
            if(dado != arranjo1->data[i + 1]) { 
                array->data[idx] = dado; // armazenando dados filtrados em outro array
                idx = idx + 1;
            }
        }
    }

    return array;
}

int convert_binary_to_decimal(ref_int_Array arranjo) {
    //1 0 1 1 0 

    // 1 * (2^4) = 16
    // 0 * (2^3) = 0 
    // 1 * (2^2_ = 4
    // 1 * (2^1) = 2
    // 0 * (2^0) = 0 

    // 16 + 0 + 4 + 2 + 0 = 22

    int decimal = 0;
    double valor = 0.0;
    double soma = 0.0;
    int y = arranjo->length - 1;

    for(int i = 0; i < arranjo->length; i++){
        valor = arranjo->data[i] * pow(y, 2);
        soma = soma + valor;
        y = y - 1;
    }

    decimal = soma;

    return (int) decimal;
}
