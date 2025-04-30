#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_rec.h"
#include "io.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("-------------------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_recuperacao01\n");
    print("-------------------------------------------------\n");
    print("\n");
}

void method_ex11( void ) {
    int n = 0;
    int x = 0;
    int soma_pares = 0;
    int soma_impares = 0; //

    n = readint("Insira a quantidade desejada: ");

    for(int i = 0; i < n; i++){
        x = readint("Insira o numero: ");
        soma_pares = soma_pares + soma_divisores_pares(x);
        soma_impares = soma_impares + soma_divisores_impares(x);
    }

    if(soma_pares > soma_impares) print("pares");
    if(soma_pares < soma_impares) print("impares");
    if(soma_pares == soma_impares) print("iguais");

    footer();
}

void method_ex12( void ) {   
    
}

void method_ex13( void ) {
    
}

void method_ex14( void ) {
    
}

void method_ex15( void ) {
    
}

void method_ex16( void ) {
    
}

void method_ex17( void ) {
    
}

void method_ex18( void ) {
     
}

void method_ex19( void ){
    
}

void method_ex20( void ){
    
}

int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento ex11\n");
        printf("2  - Procedimento ex12\n");
        printf("3  - Procedimento ex13\n");
        printf("4  - Procedimento ex14\n");

        printf("5  - Procedimento ex15\n");
        printf("6  - Procedimento ex16\n");
        printf("7  - Procedimento ex17\n");

        printf("8  - Procedimento ex18\n");
        printf("9  - Procedimento ex19\n");
        printf("10 - Procedimento ex20\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_ex11(); break;
            case 2:
                method_ex12(); break;
            case 3:
                method_ex13(); break;
            case 4:
                method_ex14(); break;
            case 5:
                method_ex15(); break;
            case 6:
                method_ex16(); break;
            case 7:
                method_ex17(); break;
            case 8:
                method_ex18(); break;
            case 9:
                method_ex19(); break;
            case 10:
                method_ex20(); break;
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