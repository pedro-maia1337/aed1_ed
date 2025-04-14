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

int f1a(int x, int y, int z) {
    int w = 0;
    while(x < y-1) {
        x = x + 1;
        if(x % 2 == 0 && x % z == 0) {
            printf("%d ", x);
            w = w + 1;
        }
    }

    return w;
}

void method_0611() {
    printf("> %d", f1a(12, 45, 3));

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();  
    
}

int f2a(char *text, char c, char d, int y) {
    for(int x = strlen(text) - 1; x >= 0; x = x - 1) {
        if(c == text[x] && y > 0) {
            text[x] = d;
            y = y - 1;

            if(y == 0) x = 0;
        }
    }

    return y;
}

void method_0612() {  
    char s[10] = "batata";
    int d = f2a(s, 'a', 'A', 2);
    printf("\n%d [%s]", d, s);

    printf("\n");

    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();        
}

int f3a(int x) {

    
}


void method_0613() {




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

    
    
    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();    
}

int norep(char *str, int tam) {
    int possui_repeticao = 0;

    for(int i = 0; i < tam; i++) {
        for(int k = i + 1; k < tam; k++) {
            if(str[i] == str[k]){
                possui_repeticao = 1;
            }
        }
    }

    return possui_repeticao;
}

void method_0616() {
    char str[80];
    int controle = 0;
    int tam = 0;

    while(controle != 2) {
        printf("%s", "Insira a string: ");
        fgets(str, 80 - 1, stdin);
        str[strcspn(str, "\n")] = '\0';

        tam = strlen(str);

        if(norep(str, tam) == 0){
            controle++;
            printf("%s\n", "Nao possui repeticao");
        }

        if(norep(str, tam) == 1){
            printf("%s\n", "possui repeticao");
        }
    }

    printf("%s\n", "Encontrada duas strings sem repeticao");
    
    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();    
}
void method_0617() {

    int n = 0;

    printf("%s", "Insira o n");
    scanf("%d", &n); getchar();
    
    printf("%s\n", "Pressione enter para sair!!!!"); 
    getchar();    
}

double somar(int n) {
    double soma = 0.0;
    int denominador = 3;
    int numerador = 2;
    int exp = 1;
    double resultado_divisao = 0.0;

    for(int i = 0; i < n - 1; i++){
        resultado_divisao = (double) numerador / pow((double) denominador, (double) exp);
        numerador = numerador + 4;
        exp = exp + 1;
        soma = soma + resultado_divisao;
    }

    return 1 + soma;
}


void method_0618() {

    int n = 0;
    double resultado = 0.0;

    printf("%s", "Insira o numero de repeticoes: ");
    scanf("%d", &n); getchar();

    if(n % 2 != 0) {
        resultado = somar(n) - somar(n + 1);
    }

    if(n % 2 == 0) {
        resultado = somar(n - 1);  
    }

    printf("%lf\n", resultado);

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