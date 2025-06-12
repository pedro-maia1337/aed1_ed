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
#include "myCharArray.h"

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

    free_int_Array(arranjo);

    footer();
}


void method_012( void ) {   
    
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

    free_int_Array(arranjo);

    footer();
}

void method_013( void ) { 

    /*
    - definir uma função para receber um arranjo e um valor inteiro
    como parâmetros, e achar a mediana (valor mais perto da média);
    se houver dois próximos e diferentes, usar a média desses dois;
    - ler arranjo do arquivo DADOS1.TXT
    */

    ref_int_Array arranjo = freadIntArray("DADOS1.txt");
    printIntArray(arranjo);

    printf("\nMediana do arranjo = %.2lf", calc_mediana(arranjo));

    //fazer a segunda parte
 
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

    free_int_Array(arranjo1);
    free_int_Array(arranjo2);

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

    ref_string_Array binarios = freadStringArray("BINARIO.TXT");

    for (int i = 0; i < binarios->length; i++) {
        if (isBinaryString(binarios->data[i])) {
            int decimal = binaryToDecimal(binarios->data[i]);
            printf("%s = %d\n", binarios->data[i], decimal);
        } else {
            printf("%s -> inválido (nao e binário)\n", binarios->data[i]);
        }
    }

    free_string_Array(binarios);


    footer();
}

void method_016( void ) {

    /*
    - ler dados para matrizes do arquivo MATRIZ1.TXT;
    - ler um número inteiro ( N ), por vez, para indicar
    a quantidade de linhas e colunas de uma matriz quadrada;
    - montar, mostrar e gravar no arquivo MATRIZ2.TXT 
    uma matriz com a característica abaixo (tridiagonal crescente).
    */

    ref_int_Matrix matriz = freadintMatrix("DADOS3.txt");

    printIntMatrix(matriz);

    int x;
    print("\nDigite o tamanho x da matriz quadrada: ");
    scanf("%d", &x); getchar();

    ref_int_Matrix nova = gerarNovaMatriz(matriz, x);

    print("\nMatriz quadrada formada:\n");
    printIntMatrix(nova);

    tridiagonalCrescente(nova);

    print("\nMatriz tridiagonal crescente:\n");
    printIntMatrix(nova);

    fprintIntMatrix("MATRIZ2.TXT", nova);

    free_int_Matrix(matriz);
    free_int_Matrix(nova);

    footer();
}

void method_017( void ) {
    /*
    - ler dados para matrizes do arquivo MATRIZ1.TXT;
    - ler um número inteiro ( N ), por vez, para indicar
    a quantidade de linhas e colunas de uma matriz quadrada;
    - montar, mostrar e gravar no arquivo MATRIZ2.TXT 
    uma matriz com a característica abaixo
    (tridiagonal secundária decrescente).
    */

    ref_int_Matrix matriz = freadintMatrix("DADOS3.txt");

    printIntMatrix(matriz);

    int x;
    print("\nDigite o tamanho x da matriz quadrada: ");
    scanf("%d", &x); getchar();

    ref_int_Matrix nova = gerarNovaMatriz(matriz, x);

    print("\nMatriz quadrada:\n");
    printIntMatrix(nova);

    tridiagonalSecundariaDecrescente(nova);

    print("\nMatriz tridiagonal Secundaria drecrescente:\n");
    printIntMatrix(nova);

    fprintIntMatrix("MATRIZ3.TXT", nova);

    free_int_Matrix(matriz);
    free_int_Matrix(nova);

    footer();
}

void method_018( void ) {
    /*
    - ler matriz do arquivo MATRIZ4.TXT;
    - definir uma função lógica para verificar e
    testar se a matriz lida apresenta a característica abaixo (potências decrescentes por colunas).
    */

    bool OK = false;

    ref_int_Matrix matriz = freadintMatrix("MATRIZ4.txt");

    printIntMatrix(matriz);

    OK = verificarPotenciasDecrescentes(matriz);

    if(OK) {
        print("A matriz possui a caracteristica potencias por colunas");
    } else {
        print("A matriz NAO possui a caracteristica potencias  por colunas");
    }

    free_int_Matrix(matriz);
    
    footer();
}

void method_019( void ) {

    /*
    - ler matriz do arquivo MATRIZ4.TXT;
    - definir uma função lógica para verificar e
    testar se a matriz lida apresenta a característica abaixo (potências decrescentes por colunas).  
    */

    bool OK = false;

    ref_int_Matrix matriz = freadintMatrix("MATRIZ5.txt");

    printIntMatrix(matriz);

    OK = verificaPotenciasMatriz(matriz);

    if(OK) {
        print("A matriz possui a caracteristica potencias decrescentes por colunas");
    } else {
        print("A matriz NAO possui a caracteristica potencias decrescentes por colunas");
    }

    free_int_Matrix(matriz);
    
    footer();
}

void method_020( void ) {
    /*
    - ler do arquivo DADOS3.TXT:
    - um número inteiro ( N ) para indicar
    a quantidade de supermercados cujos preços de produtos serão avaliados;
    - o nome e o código (int) de cada supermercado;
    - ler o preço de um produto de cada supermercado;
    - calcular o preço médio desse produto;
    - informar pelo menos dois supermercados com preços inferiores à média.
    */

    int n = 0;
    ref_Supermercado supermercados = freadSupermercado("SUPERMERCADOS.TXT", &n);

    printSup(supermercados, n);

    float media = calc_media(supermercados, n);
    printf("\nPreco medio: %.2f\n", media);

    abaixo_media(supermercados, n, media);

    free_sup(supermercados, n);

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