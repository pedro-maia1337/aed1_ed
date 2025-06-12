#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "io.h"
#include "myarray.h"
#include "mymatriz.h"
#include "supermercado.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("----------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_rec2\n");
    print("-----------------------------------------\n");
    print("\n");
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
    int n = 0;
    ref_int_Matrix matriz = freadintMatrix("MATRIZ1.txt");

<<<<<<< HEAD
    ref_int_Matrix original = freadintMatrix("DADOS3.txt");

    printf("Matriz original:\n");
    printIntMatrix(original);

    int x;
    printf("\nDigite o novo tamanho x da matriz quadrada: ");
    scanf("%d", &x); getchar();

    ref_int_Matrix nova = gerarNovaMatriz(original, x);

    printf("\nMatriz quadrada formada (antes da tridiagonal):\n");
    printIntMatrix(nova);

    tridiagonalCrescente(nova);

    printf("\nMatriz tridiagonal crescente:\n");
    printIntMatrix(nova);

    fprintIntMatrix("MATRIZ2.TXT", nova);

    free_int_Matrix(original);
    free_int_Matrix(nova);
=======
    print("Insira n: ");
    scanf("%d", &n); getchar();

    gerarTridiagonal(n, matriz);

    printIntMatrix(matriz);
>>>>>>> 3ee2213f4ea685d867f49141da305d0d71141152

    footer();
}

void method_017( void ) {
    ref_int_Matrix original = freadintMatrix("DADOS3.txt");

    printf("Matriz original:\n");
    printIntMatrix(original);

    int x;
    printf("\nDigite o novo tamanho x da matriz quadrada: ");
    scanf("%d", &x); getchar();

    ref_int_Matrix nova = gerarNovaMatriz(original, x);

    printf("\nMatriz quadrada formada (antes da tridiagonal):\n");
    printIntMatrix(nova);

    tridiagonalSecundariaDecrescente(nova);

    printf("\nMatriz tridiagonal Secundaria drecrescente:\n");
    printIntMatrix(nova);

    fprintIntMatrix("MATRIZ3.TXT", nova);

    free_int_Matrix(original);
    free_int_Matrix(nova);

    footer();

    footer();
}

void method_018( void ) {
    

    footer();
}

void method_019( void ){
    

    footer();
}

void method_020( void ) {

    ref_Supermercado sup = freadSupermercado("DADOS3.txt");

    printSup(sup);
    

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