#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_ed06.h"

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed06\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0611() {
    int n = 0;

    printf("Insira o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    multiplos_de_tres(n, 0, 0);

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();
}

void method_0612() {   
    int n = 0;
    int x = 0;

    printf("Insira o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    x = n * 3;

    multiplos_de_tres_decrescente(n, x, 0);

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();        
   
}

void method_0613() {
    int n = 0;

    printf("Insira o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    inverso_multiplos_de_tres(n, 0.0, 0);
    
    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();  
}

void method_0614() {
    int n = 0;
    double x = 0;

    printf("Insira o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    x = ((double) n * 3.0) - 3.0;

    inverso_multiplos_de_tres_decrescente(n, x, 0);

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();
}

void method_0615() {
    //3 + 4 + 7 + 12 + 19

    int x = 3;

    for(int n = 1; n <= 5; n++) {
        x = gerar_adicao_de_valores_impares(n, x, 0);
        printf("%d ", x);
    }
    

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();    
}

void method_0616() {
    

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();
}

void method_0617() {
   

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();
}

void method_0618() {
    

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();
}

void method_0619(){
    

    printf("\n");
    
    printf("Pressione enter para sair!!!!\n"); 
    getchar();
}

void method_0620(){
    

    printf("\n");

    printf("Pressione enter para sair!!!!\n"); 
    getchar();

}


int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento 0611\n");
        printf("2  - Procedimento 0612\n");
        printf("3  - Procedimento 0613\n");
        printf("4  - Procedimento 0614\n");

        printf("5  - Procedimento 0615\n");
        printf("6  - Procedimento 0616\n");
        printf("7  - Procedimento 0617\n");

        printf("8  - Procedimento 0618\n");
        printf("9  - Procedimento 0619\n");
        printf("10 - Procedimento 0620\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_0611(); break;
            case 2:
                method_0612(); break;
            case 3:
                method_0613(); break;
            case 4:
                method_0614(); break;
            case 5:
                method_0615(); break;
            case 6:
                method_0616(); break;
            case 7:
                method_0617(); break;
            case 8:
                method_0618(); break;
            case 9:
                method_0619(); break;
            case 10:
                method_0620(); break;
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