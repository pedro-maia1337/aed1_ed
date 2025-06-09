#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "io.h"
#include "myarray.h"
#include "mymatriz.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("----------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_ed08\n");
    print("-----------------------------------------\n");
    print("\n");
}

void method_pa01( void ) {
    
}

void method_pa02( void ) {
    
}

void method_pa03( void ) {
    int x = 1;
    int y = 0;
    int n = 3;

    while(x < n){
        print("ola\n");
        while(y < n){
            printf("hello\n");
            y = y + 1;
        }
        x = x +1;
    }

   pause("\nAperte Enter para sair. ");
}

void method_pa04( void ) {
     for(int i = 0; i < 9; i++){
        printf("%d ", i);
     }

     pause("\nAperte Enter para sair. ");
}

void method_pa05( void ) {
    int *m = malloc(2 * sizeof(int)); int n = 129;
    m[0] = *m - *m; *(m+1)=n;



    pause("\nAperte Enter para sair. ");
}

void maiores(int *arranjo, int size) {
    int maior1 = arranjo[0];
    int maior2 = arranjo[0];


    for(int i = 0; i < size; i=i+1) {
        if(maior1 < arranjo[i]) {
            maior1 = arranjo[i];
        }

        if(maior2 < arranjo[i] && arranjo[i] != maior1) {
            maior2 = arranjo[i];
        }
    }

    printf("Maior valor = %d Segundo Maior = %d", maior1, maior2);
    printf("\n");
}

void method_pa06( void ) {
    /*
        Definir um procedimento para receber certas quantidade de dados e um arranjo de inteiros como parametro
        e sem ordenar possa mostrar os dois maiores e diferentes contidos no arranjo. 
    */

    int arranjo1[5] = {3, 1, 5, 2, 4};
    int arranjo2[5] = {3, 1, 5, 2, 5};

    maiores(arranjo1, 5);
    maiores(arranjo2, 5);

    pause("\nAperte Enter para sair. ");
}

void maiores_matriz(int rows, int colums, int m[][colums]) {
    int maior = 0;
    for(int i = 0; i < rows; i++){
        maior = m[0][i];
        for(int k = 0; k < colums; k++){
            if(maior < m[i][k]){
                maior = m[i][k];   
            } 
        } 
        printf("%d", maior);     
    }
}

void method_pa07( void ){
    /*
        Definir um procedimento para receber parametros a quantida de linhas e colunas, bem como a matriz de inteiros,
        e possa devolver a matriz com os maiores elementos de cada linha na respectiva posição da diagonal principal.
    */

    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    maiores_matriz(3, 3, matriz);

    pause("\nAperte Enter para sair. ");
}

void method_pa08( void ){
    int primeiro_dado = 0;
    int segundo_dado = 0;
    int terceiro_dado = 0;
    double quarto_dado = 0;
    int contador = 0;
    int aux = 0;

    //int dia = 8;
    //int mes = 11;
    //int ano = 2023;

    FILE *fread_arquivo = fopen("DATAS.txt", "rt");
    //FILE *fwrite_arquivo = fopen("BOLETOS.txt", "wt");

    while(!(feof(fread_arquivo))) {
        fscanf(fread_arquivo, "%d", &primeiro_dado);
        fscanf(fread_arquivo, "%d", &segundo_dado);
        fscanf(fread_arquivo, "%d", &terceiro_dado);
        fscanf(fread_arquivo, "%lf", &quarto_dado);

        aux = primeiro_dado;

        while (aux > 0) {
            contador++;       // Incrementa o contador
            aux /= 10;     // Divide o número por 10
        }


        printf("%d ", primeiro_dado);
        printf("%d ", segundo_dado);
        printf("%d ", terceiro_dado);
        printf("%lf ", quarto_dado);
    }

    printf("%d", contador);


    pause("\nAperte Enter para sair. ");
}


int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento PA01\n");
        printf("2  - Procedimento PA02\n");
        printf("3  - Procedimento PA03\n");
        printf("4  - Procedimento PA04\n");
        printf("5  - Procedimento PA05\n");
        printf("6  - Procedimento PA06\n");
        printf("7  - Procedimento PA07\n");
        printf("8  - Procedimento PA08\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_pa01(); break;
            case 2:
                method_pa02(); break;
            case 3:
                method_pa03(); break;
            case 4:
                method_pa04(); break;
            case 5:
                method_pa05(); break;
            case 6:
                method_pa06(); break;
            case 7:
                method_pa07(); break;
            case 8:
                method_pa08(); break;
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