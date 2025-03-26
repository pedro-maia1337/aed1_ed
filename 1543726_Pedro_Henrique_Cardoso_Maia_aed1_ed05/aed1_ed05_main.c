#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_ed05.h"

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed05\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0511() {
    // n = 5 => { 3, 6, 9, 12, 15 }
    int n = 0;
    int valor = 0;

    printf("Insira o valor: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {
        valor = valor + (3 * 1);
        printf("%d ", valor);
    }

    printf("Pressione enter para sair!!!!\n"); 
    getchar();
}

void method_0512() {   
    //n = 5 => { 15, 30, 45, 60, 75 }     
    int n = 0;
    int valor = 0;

    printf("Insira o valor: ");
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++) {
        valor = valor + (3 * 5);
        printf("%d ", valor);
    }

    printf("Pressione enter para sair!!!!\n"); 
    getchar();        
   
}

void method_0513() {
    //n = 5 => { 1024, 256, 64, 16, 4 }
    int n = 0;
    int valor = 2;
    int resultado = 0;
    int pot = 0;

    printf("Insira o valor: ");
    scanf("%d", &n);
    getchar();

    printf("%d ", potencia(2, 2));
    printf("%d ", potencia(2, 4));
    printf("%d ", potencia(2, 6));
    printf("%d ", potencia(2, 8));

    printf("Pressione enter para sair!!!!\n"); 
    getchar();  
}

void method_0514() {
    
}

void method_0515() {
    
}

void method_0516() {
}

void method_0517() {
    
}

void method_0518() {
    
}

void method_0519(){
    
}

void method_0520(){

}


int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento 0511\n");
        printf("2  - Procedimento 0512\n");
        printf("3  - Procedimento 0513\n");
        printf("4  - Procedimento 0514\n");

        printf("5  - Procedimento 0515\n");
        printf("6  - Procedimento 0516\n");
        printf("7  - Procedimento 0517\n");

        printf("8  - Procedimento 0518\n");
        printf("9  - Procedimento 0519\n");
        printf("10 - Procedimento 0520\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_0511(); break;
            case 2:
                method_0512(); break;
            case 3:
                method_0513(); break;
            case 4:
                method_0514(); break;
            case 5:
                method_0515(); break;
            case 6:
                method_0516(); break;
            case 7:
                method_0517(); break;
            case 8:
                method_0518(); break;
            case 9:
                method_0519(); break;
            case 10:
                method_0520(); break;
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