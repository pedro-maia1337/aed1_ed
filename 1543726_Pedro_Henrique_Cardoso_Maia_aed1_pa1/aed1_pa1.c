#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed06\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0611() {
    //2piR

    int n1 = 0.0;
    int n2 = 0.0;
    double parteCircuferencia = 0.0;
    double resultado = 0.0;

    printf("%s", "Insira o raio da circuferencia: ");
    scanf("%d", &n1); getchar();

    printf("%s", "Insira quantas partes dividir: ");
    scanf("%d", &n2); getchar();

    parteCircuferencia = (double) n1 / (double) n2;

    resultado = 2 * 3.14 * parteCircuferencia;

    printf("%lf", resultado);

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();  
    
}

void method_0612() {  

    int qtdTestes = 0;
    char t1 = ' ';
    char t2 = ' ';
    char t3 = ' ';

    // { 5, ('a','e','c'), ('e','a','c'), ('a','c','e'), ('e','c','a'), ('a','e','a') }

    // 2 (a, c, e) // true, (a, e ,c) // false 

    //t1 > t2 && t1 > t3 && t2 > t3

    // a < b
    // a < c
    // b < c

    int c = false;

    printf("%s", "Insira a quantidade de testes a serem feitos: ");
    scanf("%d", &qtdTestes); getchar();

    while(qtdTestes > 0) {
        scanf("%c", &t1); getchar();
        scanf("%c", &t2); getchar();
        scanf("%c", &t3); getchar();

        if(t1 < t2 && t1 < t3 && t2 < t3){
            c = true;
        }

        if(c) {
            printf("%s", "Ordem crescente");
            getchar();
        } else {
            printf("%s", "Nao estao em ordem crescente");
            getchar();
        }

        qtdTestes--;
    }
   
    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();        
}

void method_0613() {

    //serem pares e sua metade e dobro estão contidos no intervalo.
    //Exemplo: [ 12: 72 ), e n = 5, com { 25, 27, 30, 35, 36 } = 2

    int a = 0;
    int b = 0;

    int qtdTeste = 0;

    int x = 0;
    int dobro = 0;
    double metade = 0.0;

    int qtdResultado = 0;

    printf("%s", "Insira o valor incial do intervalo: ");
    scanf("%d", &a); getchar();

    printf("%s", "Insira o valor final do intervalo: ");
    scanf("%d", &b); getchar();

    printf("%s", "Insira a quantidade de valores a serem testados: ");
    scanf("%d", &qtdTeste); getchar();

    for(int i = 0; i < qtdTeste; i++){
        scanf("%d", &x); getchar();

        dobro = x * 2;
        metade = x / 2;

        if(x % 2 == 0 && dobro > a && dobro <= b && metade > a && metade <= b) {
            qtdResultado++;
        }
    }

    printf("%d", qtdResultado);

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();  
}

void method_0614() {
    

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();
}

void method_0615() {
    

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