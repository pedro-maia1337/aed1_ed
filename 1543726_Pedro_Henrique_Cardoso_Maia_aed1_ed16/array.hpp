#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

using std::cin ; // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ofstream; // para gravar arquivo
using std::ifstream ; // para ler arquivo
#include <ctime>
#include <random>
#include <string.h>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

typedef int* ints;
typedef char* chars;

typedef struct s_int_Array {
    int length;
    ints data;
    int ix ;
    int capacity;
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
        tmpArray->capacity = n > 0 ? n : 1;

        if( n > 0 ) {  
            tmpArray->length = n;
            tmpArray->data = (int*) malloc(tmpArray->capacity * sizeof(int));
            tmpArray->ix = 0;
            tmpArray->capacity = n;
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
            printf( "\nERRO: Valor invalido.\n" ); 
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

    return *array; 
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

ref_int_Array arrayFill(ref_int_Array array) {
    for (int i = 0; i < array->length; i=i+1) {
        array->data[i] = i + 1;
    }

    return array;
}

bool isArrayDecrescent(int_Array arranjo) {
    for (int i = 0; i < arranjo.length; i++) {
        if (arranjo.data[i] < arranjo.data[i + 1]) {
            return false;
        }
    }

    return true;
}

ref_int_Array array_push_back ( ref_int_Array array, int value ) {
    //validar capacidade
    //definir nova capacidade
    //redefinir dados com realloc 
    //adicionar valor
    //redefinir capacidade
    //redefinir o apontador 

    if(array == nullptr) {
        cout << "Nao foi possivel acessar o arranjo";
        return nullptr;
    }

    if(array->length >= array->capacity) {

        int new_capacity = array->capacity + 1;
        int *temp = (int *)realloc(array->data, new_capacity * sizeof(int));

        if(temp == nullptr) {
            cout << "Nao foi possivel realocar memoria";
            return nullptr;
        }

        array->data = temp;
        array->capacity = new_capacity;
    } else {
        cout << "Erro....";
        return nullptr;
    }

    array->data[array->length] = value;
    array->length = array->length + 1;

    return array;
}

ref_int_Array array_pop_back ( ref_int_Array array) {
    if(array == nullptr) {
        cout << "Nao foi possivel acessar o arranjo";
        return nullptr;
    }

    if(array->length > 0) {

        int new_capacity = array->capacity - 1;
        int *temp = (int *)realloc(array->data, new_capacity * sizeof(int));

        if(temp == nullptr) {
            cout << "Nao foi possivel realocar memoria";
            return nullptr;
        }

        array->data = temp;
        array->capacity = new_capacity;
    } else {
        cout << "Erro....";
        return nullptr;
    }

    array->data[array->length - 1] = 0;
    array->length = array->length - 1;

    return array;
}

ref_int_Array array_push_front ( ref_int_Array array, int value ) {
    //validar capacidade
    //definir nova capacidade
    //redefinir dados com realloc 
    //deslocar os valores para DIREITA
    //adicionar valor
    //redefinir capacidade
    //redefinir o apontador 

    // voltar provavelmente tem que mover e aumentar o tamanho primeiro 

    if(array == nullptr) {
        cout << "Nao foi possivel acessar o arranjo";
        return nullptr;
    }

    if(array->length >= array->capacity) {
        array->length = array->length + 1;

        int new_capacity = array->capacity + 1;
        int *temp = (int *)realloc(array->data, new_capacity * sizeof(int));

        if(temp == nullptr) {
            cout << "Nao foi possivel realocar memoria";
            return nullptr;
        }

        array->data = temp;
        array->capacity = new_capacity;

    } else {
        cout << "Erro...."; //mudar mensagem de erro 
        return nullptr;
    }

    for ( array->ix = array->length - 1; array->ix >= 0; array->ix = array->ix-  1 ) { 
        array->data[ array->ix + 1] = array->data[ array->ix ];
    } 
    array->data[0] = value;

    return array;
}

ref_int_Array array_pop_front ( ref_int_Array array) {
    if(array == nullptr) {
        cout << "Nao foi possivel acessar o arranjo";
        return nullptr;
    }

    if(array->length > 0) {

        //Mover primeiro depois realocar

        for ( array->ix = 0 ; array->ix <= array->length; array->ix = array->ix+1 ) { 
            array->data[ array->ix - 1] = array->data[ array->ix ];
        } 
 
        array->length = array->length - 1;

        int new_capacity = array->capacity - 1;
        int *temp = (int *)realloc(array->data, new_capacity * sizeof(int));

        if(temp != nullptr) {  //manter os dados
            array->data = temp;
            array->capacity = new_capacity;
        }

    } else {
        cout << "Erro....";
        return nullptr;
    }

    return array;
}

ref_int_Array array_push_mid ( ref_int_Array array, int value) {
    int apt = array->length / 2;


    if(array == nullptr) {
        cout << "Nao foi possivel acessar o arranjo";
        return nullptr;
    }

    if(array->length >= array->capacity) {
        int new_capacity = array->capacity + 1;
        int *temp = (int *)realloc(array->data, new_capacity * sizeof(int));

        if(temp != nullptr) {  //manter os dados
            array->data = temp;
            array->capacity = new_capacity;
        }

        for ( array->ix = array->length - 1; array->ix >= apt ; array->ix = array->ix - 1 ) { 
            array->data[ array->ix + 1] = array->data[ array->ix ];
        } 

        array->data[apt] = value;

        array->length = array->length + 1;

    } else {
        cout << "Erro....";
        return nullptr;
    }

    return array;
}

ref_int_Array array_pop_mid ( ref_int_Array array ) {
    if(array == nullptr) {
        cout << "Nao foi possivel acessar o arranjo";
        return nullptr;
    }

    if(array->length > 0) {

        int apt = array->length / 2;

        //Mover primeiro depois realocar

        for ( array->ix = apt ; array->ix <= array->length ; array->ix = array->ix + 1 ) { 
            array->data[ array->ix] = array->data[ array->ix + 1];
        } 
 
        array->length = array->length - 1;

        int new_capacity = array->capacity - 1;
        int *temp = (int *)realloc(array->data, new_capacity * sizeof(int));

        if(temp != nullptr) {  //manter os dados
            array->data = temp;
            array->capacity = new_capacity;
        }

    } else {
        cout << "Erro....";
        return nullptr;
    }

    return array;
}

int intArray_cmp( ref_int_Array p, ref_int_Array q) {
    int flag = 0;
    int min = 0;

    if(p == nullptr || q == nullptr) {
        cout << "Nao foi possivel acessar o array";
        return 0;
    } else {
        p->length < q->length ? min = p->length : min = q->length;

        for(int i = 0; i > min; i++){
            flag = p->data[i] - q->data[i];
            if(flag != 0) return flag;
        }
    }

    return p->length - q->length;
}

ref_int_Array intArray_cat ( ref_int_Array p, ref_int_Array q ) {
    if(p == nullptr || q == nullptr) {
        cout << "Nao foi possivel acessar o array";
        return nullptr;
    } 

    int tmp_len = p->length + q->length;
    ref_int_Array tmpArray = new_int_Array(tmp_len);
    int count = 0;
    
    if(tmpArray == nullptr) {
        cout << "Nao foi possivel alocar o novo array";
        return nullptr;
    }

    for(int i = 0; i < p->length; i = i + 1){
        tmpArray->data[i] = p->data[i];
    }

    for(int i = p->length; i < tmp_len; i = i + 1){
        tmpArray->data[i] = q->data[count];
        count = count + 1;
    }
        
    return tmpArray;
}

ref_int_Array intArray_seek ( ref_int_Array array, int x ) {
    if(array == nullptr || array->data == nullptr) {
        cout << "Array nao possui dados";
        return nullptr;
    }

    for(array->ix = 0 ; array->ix < array->length ; array->ix = array->ix + 1) {
        if(array->data[ array->ix ] == x) {
            return array;
        }
    }

    return nullptr;
}
 

ref_int_Array intArray_sub(ref_int_Array a, int start, int size) {
    if (a == nullptr || a->data == nullptr) {
        printf("Erro: arranjo nulo ou dados nao inicializados.\n");
        return nullptr;
    }

    if (start < 0 || size < 0 || (start + size) > a->length) {
        cout << "Intervalo invalido";
        return nullptr;
    }

    ref_int_Array tmpArray = new_int_Array(size);
    if (tmpArray == nullptr) {
        cout << "Nao foi possivel alocar o novo array";
        return nullptr;
    }

    for (int i = 0; i < size; i++) {
        tmpArray->data[i] = a->data[start + i];
    }

    return tmpArray;
}

ref_int_Array intArray_merge(ref_int_Array p, ref_int_Array q) {

    int tmp_len = p->length + q->length;
    ref_int_Array tmp_array = new_int_Array(tmp_len);

    if(p == nullptr || q == nullptr) {
        cout << "Nao foi possivel acessar o array";
        return nullptr;
    } else {
        int min_length = 0;
        p->length < q->length ? min_length = p->length : min_length = q->length;

        int ip = 0;
        int iq = 0;

        for(int i = 0; i < tmp_len; i = i + 1) {
            if(ip <= p->length) {
                tmp_array->data[i] = p->data[ip];
                ip = ip + 1;
            }

            i = i + 1;

            if(iq <= q->length) {
                tmp_array->data[i] = p->data[iq];
                iq = iq + 1;
            }
        }
    }

    
    return tmp_array;
}
 

#endif
