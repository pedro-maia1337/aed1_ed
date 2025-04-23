#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_ed07.h"
#include "io.h"

#define MAX 100

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed07\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0711() {
    int n = 0;

    n = readint("Insira a quantidade de numeros multiplos de 4 a serem gravados: ");

    gravar_numeros_multiplos_de_quatro(n);

    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}

void method_0712() {   
    int n = 0;

    n = readint("Insira a quantidade de numeros multiplos de quinze, pares, em ordem decrescente a serem gravados: ");

    gravar_numeros_multiplos_de_quinze(n);
    
    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!");   
}

void method_0713() {
    int n = 0;

    n = readint("Insira a quantidade de repeticoes: ");

    gravar_potencia_de_tres(n);
    
    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}

void method_0714() {
    int n = 0;

    n = readint("Insira a quantidade de repeticoes: ");
    
    gravar_inverso_potencia_de_tres(n);

    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}

void method_0715() {
    int n = 0;
    int x = 0;

    n = readint("Insira a quantidade de repeticoes:");
    x = readint("Insira da base:");
    
    gravar_inverso_potencia(n, x);

    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}

void method_0716() {
    int n = 0;

    n = readint("Insira a quantidade de termos a serem somados: ");

    gravar_soma(n);
    
    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}

void method_0717() {
    int n = 0;

    n = readint("Insira a quantidade de termos a serem somados: ");

    gravar_inversos_0714(n);
   
    printf("\n");

    print("Dados gravados com sucesso");

    pause("Pressione enter para sair!!!!"); 
}

void method_0718() {
    int n = 0;

    n = readint("Insira um numero ");

    printf("%d", fib(n));
    
    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}

void method_0719(){


    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}

void method_0720(){

    
    
    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}


void method_07E1(){
    

    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}


void method_07E2() {
    
    
    printf("\n");

    print("Dados gravados com sucesso"); 
    pause("Pressione enter para sair!!!!"); 
}


int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento 0711\n");
        printf("2  - Procedimento 0712\n");
        printf("3  - Procedimento 0713\n");
        printf("4  - Procedimento 0714\n");

        printf("5  - Procedimento 0715\n");
        printf("6  - Procedimento 0716\n");
        printf("7  - Procedimento 0717\n");

        printf("8  - Procedimento 0718\n");
        printf("9  - Procedimento 0719\n");
        printf("10 - Procedimento 0720\n");

        printf("11 - Procedimento 07E1\n");
        printf("12 - Procedimento 07E2\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_0711(); break;
            case 2:
                method_0712(); break;
            case 3:
                method_0713(); break;
            case 4:
                method_0714(); break;
            case 5:
                method_0715(); break;
            case 6:
                method_0716(); break;
            case 7:
                method_0717(); break;
            case 8:
                method_0718(); break;
            case 9:
                method_0719(); break;
            case 10:
                method_0720(); break;
            case 11:
                method_07E1(); break;
            case 12:
                method_07E2(); break;
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