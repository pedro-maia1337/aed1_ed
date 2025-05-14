#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_ed10.h"
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

typedef struct s_int_Array {
    int length;
    ints data;
    int ix ;
} int_Array;

typedef int_Array* ref_int_Array; //referencia

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

    static int_Array array; //definindo dado

    int inicio = 0;
    int fim = 0;
    int n = 0;

    n = readint("Insira a quantidade de elementos a serem gerados: ");
    inicio = readint("Insira o inicio do intervalo: ");
    fim = readint("Insira o final do intervalo: ");

    array.length = n;

    array.data = ints ( array.length );

    for(int i = 0; i < array.length; i++){
        array.data[i] = RandomIntGenerate(inicio, fim);
    }

}

void method_0812( void ) {   
/*  procurar certo valor inteiro em um arranjo.
    Para testar, receber um nome de arquivo como parâmetro e
    aplicar a função sobre o arranjo com os valores lidos.
    DICA: Usar o modelo de arranjo proposto nos exemplos.
    Exemplo: arranjo = readArrayFromFile ( "DADOS.TXT" );
    resposta = arraySearch ( valor, arranjo );
*/


}

void method_0813( void ) {
    
}

void method_0814( void ) {
    
}

void method_0815( void ) {
    
}

void method_0816( void ) {
    
}

void method_0817( void ) {
    
}

void method_0818( void ) {
     
}

void method_0819( void ){
    
}

void method_0820( void ){
    
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