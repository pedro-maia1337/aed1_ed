#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include "aed1_ed03.h"

#define MAX 100

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed02\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0311() {
    char s[MAX];

    printf("Insira a palavra: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    //encontrar as letras maiores que K
    //subtistuir pelas letras maisculas ???? 

    for(int i = 0; i < strlen(s); i++) {
        if(s[i] > 'k')  printf("%c", convmaiuscula(s[i]));
        if(s[i] < 'k')  printf("%c", s[i]);  
    }

    ///incluir os outros testes

    printf("\n");

    printf("Pressione Enter para continuar...\n");
    getchar();
}

void method_0312() {
    char s[MAX];
    int count = 0;

    printf("Insira a palavra: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    //encontrar as letras maiores que K
    //subtistuir pelas letras maisculas ???? 

    for(int i = 0; i < strlen(s); i++) {
        if(s[i] > 'k') {
            printf("%c", convmaiuscula(s[i]));
            count++;
        }
        if(s[i] < 'k')  printf("%c", s[i]);  
    }

    ///incluir os outros testes

    printf("\n");

    printf("Numero de letras maiores que K: %d", count);

    printf("Pressione Enter para continuar...\n");
    getchar();
}

void method_0313() {
    char s[MAX];
    int count = 0;

    printf("Insira a palavra: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    //encontrar as letras maiores que K
    //subtistuir pelas letras maisculas ???? 

    for(int i = 0; i < strlen(s); i++) {
        if(s[i] > 'k') {
            printf("%c", convmaiuscula(s[i]));
            count++;
        }
        if(s[i] < 'k')  printf("%c", s[i]);  
    }

    ///incluir os outros testes

    printf("\n");

    printf("Numero de letras maiores que K: %d", count);

    printf("Pressione Enter para continuar...\n");
    getchar();
}

void method_0314() {
    
}


void method_0316() {
    
}

void method_0317() {
    
}

void method_0318(){
    

}

void method_0319(){
    
}

void method_0320(){
     
}


int main(int argc, char *argv[]) {

    int op;

    do {
        cabecalho();
        printf("1  - Procedimento 0311\n");
        printf("2  - Procedimento 0312\n");
        printf("3  - Procedimento 0313\n");
        printf("4  - Procedimento 0314\n");

        printf("5  - Procedimento 0315\n");
        printf("6  - Procedimento 0316\n");
        printf("7  - Procedimento 0317\n");

        printf("8  - Procedimento 0318\n");
        printf("9  - Procedimento 0319\n");
        printf("10 - Procedimento 0320\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_0311();
                break;

            case 2:
                method_0312();
                break;

            case 3:
                method_0313();
                break;

            case 4:
                method_0314();
                break;

            case 6:
                method_0316();
                break;

            case 7:
                method_0317();
                break;

            case 8:
                method_0318();
                break;

            case 9:
                method_0319();
                break;

            case 10:
                method_0320();
                break;

            case 0:
                printf("Pressione Enter para continuar...\n");
                getchar();
                break; 

            default:
                printf("%s", "Opcao invalida");
                break;
            }

    } while(op != 0); 

    return 0;
}