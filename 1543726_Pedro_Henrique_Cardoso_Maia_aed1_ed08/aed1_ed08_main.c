#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include "aed1_ed08.h"
#include "io.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("----------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_ed08\n");
    print("-----------------------------------------\n");
    print("\n");
}

void method_0811( void ) {
    int n = 0;
    n = readint("Numero: ");

    if(n < 0 || !n){ //validar isso aqui depois / transformar em função ? 
        print("Valor invalido");
        return;
    }

    int arr[n];

    lerPares(n, arr);
    lerArranjo(n, arr);

    footer();
}

void method_0812( void ) {   
    

}

void method_0813( void ) {
    int a = 0;
    int b = 0;

    a = readint("Determine o inicio do intervalo: ");
    b = readint("Determine o final do intervalo: ");

    if(a < 0 || !a) {
        print("Valor invalido");
        return;
    }

    if(b < 0 || !b) {
        print("Valor invalido");
        return;
    }

    gerarInt(a - 1, b - 1);

    footer();
}

void method_0814( void ) {
    int n = 0;
    char str[100];
    int arr[MAX];
    int menor_valor = 0;

    n = readint("Insira a quantidade de numeros que deseja ler: ");

    if(n < 0 || !n) {
        print("Valor invalido");
        return;
    }

    printf("%s", "Digite a frase: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    lerArquivo(n, str, arr);

    menor_valor = acharMenorPar(n, arr);

    printf("%d", menor_valor);

    footer();
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