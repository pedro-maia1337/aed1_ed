#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_ed06.h"

#define MAX 100

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed06\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0611() {
    //n = 5 => { 3, 6, 9, 12, 15 }
    int n = 0;

    printf("%s", "Insira a quantidade de numeros multiplos de tres que deseja gerar: ");
    scanf("%d", &n); getchar();

    gerar_multiplos_de_tres(n, 0);

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();    
}

void method_0612() {   
    // n = 5 => { 15, 12, 9, 6, 3 }
    int n = 0;
    int x = 0;

    printf("%s", "Insira a quantidade de numeros multiplos de tres em ordem decrescente que deseja gerar: ");
    scanf("%d", &n); getchar();

    x = n * 3;

    gerar_multiplos_de_tres_decrescente(n, x);

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();        
}

void method_0613() {
    //valor = 5 => { 1/1, 1/3, 1/6, 1/9, 1/12 } = 1, 0.33, 0.16, 0.1, 0.0833
    int n = 0;

    printf("%s", "Insira a quantidade de numeros inversos dos multiplos de tres que deseja gerar: ");
    scanf("%d", &n); getchar();

    printf("%lf ", 1.0); // 1/1

    gerar_inversos_multiplos_de_tres(n - 1, 1);
    
    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();  
}

void method_0614() {
    //valor = 5 => { 1/12, 1/9, 1/6, 1/3, 1/1 } = 0.0833, 0.111, 0.166, 0.333, 1.000
    int n = 0;

    printf("%s", "Digite o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    gerar_inversos_multiplos_de_tres_decrescente(n - 1, n);

    printf("%lf ", 1.0); // 1/1

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();
}

void method_0615() {
    //valor = 4  =>  3 + 4 + 7 + 12      = 26
    //valor = 5  =>  3 + 4 + 7 + 12 + 19 = 45

    int t = 0;

    printf("%s", "Digite o numero de repeticoes: ");
    scanf("%d", &t); getchar();

    printf("%d", gerar_soma_adicao_de_valores_impares(t, 3, 0));

    printf("\n");
    
    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();    
}

void method_0616() {
    //n = 5 => 1/3 + 1/4 + 1/7 + 1/12               = 0.8095
    //n = 6 => 1/3 + 1/4 + 1/7 + 1/12 + 1/15        = 0.8978

    int t = 0;

    printf("%s", "Digite o numero de repeticoes: ");
    scanf("%d", &t); getchar();

    printf("%lf", gerar_inversos_adicao_de_valores_impares(t, 3, 0.0));

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();
}

void method_0617() {
    //sequência = "abcde" = e d c b a
    //sequência = "teste" = e t s e t

    char str[MAX];
    int tam = 0;

    printf("%s", "Digite a frase: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    tam = strlen(str);

    inverter_string(str, tam);
   
    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();
}

void method_0618() {

    //Sequência = "P4LaVr@1"  = 1
    //Sequência: "1234567890" = 5

    char str[MAX];
    int tam = 0;

    printf("%s", "Digite a frase: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    tam = strlen(str);

    printf("%d", contar_digito_par(str, tam));
    
    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();
}

void method_0619(){

    //sequência = "P4LaVr@1" = 1
    //sequência = "EFGHI" = 5
    //sequência = "efghi" = 0

    char str[MAX];
    int tam = 0;
    int qtd = 0;

    printf("%s", "Digite a frase: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    tam = strlen(str);

    printf("%d", verificar_string(str, tam, qtd));

    printf("\n");
    
    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();
}

void method_0620(){

    //valor = 3 => 2+8+34 = 44
    //valor = 4 => 2+8+34+144 = 188
    //valor = 5 => 2+8+34+144+610 = 798

    int n = 0;

    printf("%s", "Digite o termo da sequencia: ");
    scanf("%d", &n); getchar();

    printf("%d", somar_termo_par_fib(n, 0, 1));
    
    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();

}


void method_06E1(){
    int x = 0;
    int n = 0;
    int soma = 0;
    int pot = 3;
    
    //f ( 2, 5 ) = 1 + 2^3 + 2^5 + 2^7 + 2^9         = 681
    //f ( 2, 6 ) = 1 + 2^3 + 2^5 + 2^7 + 2^9 + 2^11  = 2.729         

    printf("%s", "Digite a base: ");
    scanf("%d", &x); getchar();

    printf("%s", "Digite o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    printf("%d", 1 + somar_potencia(x, n, soma, pot));

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();
}


void method_06E2() {
    //  e = 1 + 3/2! + 5/4! + 7/8!      + 9/16!
    //  5 = 1 + 3/2  + 5/24 + 7/40320   + 9/2004189184 = 1,70850

    double x = 3.0;
    int n = 0;
    int denominador = 2;
    double soma = 0.0;

    printf("%s", "Digite o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    printf("%lf", somar_divisao_fatorial(x, n, denominador, soma));
    
    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
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

        printf("11 - Procedimento 06E1\n");
        printf("12 - Procedimento 06E2\n");

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
            case 11:
                method_06E1(); break;
            case 12:
                method_06E2(); break;
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