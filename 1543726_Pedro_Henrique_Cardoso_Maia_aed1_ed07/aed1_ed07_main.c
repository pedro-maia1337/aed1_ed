#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_ed07.h"
#include "io.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("----------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_ed07\n");
    print("-----------------------------------------\n");
    print("\n");
}

void method_0711( void ) {
    int n = 0;
    n = readint("Insira a quantidade de numeros multiplos de 4, pares, em ordem crescente a serem gravados: ");

    gravar_numeros_multiplos_de_quatro(n);

    footer(); 
}

void method_0712( void ) {   
    int n = 0;
    n = readint("Insira a quantidade de numeros multiplos de quinze, pares, em ordem decrescente a serem gravados: ");

    gravar_numeros_multiplos_de_quinze(n);
    
    footer();  
}

void method_0713( void ) {
    int n = 0;
    n = readint("Insira a quantidade de repeticoes: ");

    gravar_potencia_de_tres(n);
    
    footer();
}

void method_0714( void ) {
    int n = 0;
    n = readint("Insira a quantidade de repeticoes: ");
    
    gravar_inverso_potencia_de_tres(n);

    footer();
}

void method_0715( void ) {
    int n = 0;
    int x = 0;

    n = readint("Insira a quantidade de repeticoes:");
    x = readint("Insira da base:");
    
    gravar_inverso_potencia(n, x);

    footer();
}

void method_0716( void ) {
    int n = 0;
    n = readint("Insira a quantidade de termos a serem somados: ");

    gravar_soma(n);
    
    footer();
}

void method_0717( void ) {
    int n = 0;
    n = readint("Insira a quantidade de termos a serem somados: ");

    gravar_soma_inversos(n);
   
    footer();
}

void method_0718( void ) {
    int n = 0;
    n = readint("Insira um numero ");

    gravar_numeros_pares_fib(n);
    
    footer(); 
}

void method_0719( void ){
    char str[100];
    
    print("Insira uma string: ");
    fgets(str, 100, stdin);

    gravar_string_maiusculas(str);
    
    footer();
}

void method_0720( void ){
    char str[100];

    print("Insira uma string: ");
    fgets(str, 100, stdin);

    gravar_string_maior_que_tres(str);

    footer();
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