#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "aed1_ed02.h"

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed02\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0211() {
    int val = 0;

    printf("%s", "Insira um valor: ");
    scanf("%d", &val);
    getchar();

    printf("Numero = %s e %s\n", par_ou_impar(val), positivo_ou_negativo(val));  

    printf("Pressione Enter para continuar...\n");
    getchar(); 
}

void method_0212() {
    int val = 0;

    printf("%s", "Insira um valor: ");
    scanf("%d", &val);
    getchar();

    if(val % 2 == 0 && val > -25) printf("%d %s\n", val, "= Par e maior que -25");
    if(val % 2 == 0 && val < -25) printf("%d %s\n", val, "= Par e menor que -25");
    if(val % 2 != 0 && val > -25) printf("%d %s\n", val, "= Impar e maior que -25");
    if(val % 2 != 0 && val < -25) printf("%d %s\n", val, "= Impar e menor que -25");
    //voltar depois enunciado confuso ???? 

    printf("Pressione Enter para continuar...\n");
    getchar();
}

void method_0213() {
    int val = 0;

    printf("%s", "Insira um valor: ");
    scanf("%d", &val);
    getchar();

    if(val > 20 && val < 55){
        printf("%d %s\n", val, "Pertence ao intervalo aberto (20:55)");
    } else {
        printf("%d %s\n", val, "Nao pertence ao intervalo aberto (20:55)");
    }

    printf("Pressione Enter para continuar...\n");
    getchar(); 
}

void method_0214() {
    int val = 0;

    printf("%s", "Insira um valor: ");
    scanf("%d", &val);
    getchar();

    if(val >= 20 && val <= 55){
        printf("%d %s\n", val, "Pertence ao intervalo fechado (20:55)");
    } else {
        printf("%d %s\n", val, "Nao pertence ao intervalo fechad0 (20:55)");
    }

    printf("Pressione Enter para continuar...\n");
    getchar(); 
}

//Falta o method_0215

void method_0216() {
    int val1 = 0, val2 = 0;

    printf("%s", "Insira o primeiro valor: ");
    scanf("%d", &val1);
    getchar();

    printf("%s", "Insira o segundo valor: ");
    scanf("%d", &val2);
    getchar();

    printf("Primeiro numero = %s, Segundo numero = %s e \n", par_ou_impar(val1), par_ou_impar(val2));  

    //condição do zero = par

    printf("Pressione Enter para continuar...\n");
    getchar(); 
}

void method_0217() {
    int val1 = 0, val2 = 0;

    printf("%s", "Insira o primeiro valor: ");
    scanf("%d", &val1);
    getchar();

    printf("%s", "Insira o segundo valor: ");
    scanf("%d", &val2);
    getchar();

    printf("Primeiro numero = %s e %s, Segundo numero = %s e %s\n", par_ou_impar(val1), positivo_ou_negativo(val1), par_ou_impar(val2), positivo_ou_negativo(val2));  

    printf("Pressione Enter para continuar...\n");
    getchar(); 
}

void method_0218(){
    double val1 = 0.0;
    double val2 = 0.0;

    printf("%s", "Insira o primeiro valor: ");
    scanf("%lf", &val1);
    getchar();

    printf("%s", "Insira o segundo valor: ");
    scanf("%lf", &val2);
    getchar();

    double novo_val2 = val2 / 4;

    if(val1 > novo_val2) printf("O primeiro numero: %.2lf e maior que um quarto do segundo numero\n", val1);
    if(val1 == novo_val2) printf("O primeiro numero: %.2lf e igual que um quarto do segundo numero\n", val1);
    if(val1 < novo_val2) printf("O primeiro numero: %.2lf e menor que um quarto do segundo numero\n", val1);

    printf("Pressione Enter para continuar...\n");
    getchar(); 

}

void method_0219(){
    double val1 = 0.0;
    double val2 = 0.0;
    double val3 = 0.0;

    printf("%s", "Insira o primeiro valor: ");
    scanf("%lf", &val1);
    getchar();

    printf("%s", "Insira o segundo valor: ");
    scanf("%lf", &val2);
    getchar();

    printf("%s", "Insira o terceiro valor: ");
    scanf("%lf", &val3);
    getchar();

    //estabelecer lógica

}

int main(void) {

    int op = 100;

    do {
        cabecalho();
        printf("1 - Procedimento 0211\n");
        printf("2 - Procedimento 0212\n");
        printf("3 - Procedimento 0213\n");
        printf("4 - Procedimento 0214\n");

        printf("5 - .....\n");
        printf("6 - Procedimento 0216\n");
        printf("7 - Procedimento 0217\n");

        printf("8 - Procedimento 0218\n");
        printf("9 - Procedimento 0219\n");
        printf("10 - .....\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_0211();
                break;

            case 2:
                method_0212();
                break;

            case 3:
                method_0213();
                break;

            case 4:
                method_0214();
                break;

            case 6:
                method_0216();
                break;

            case 7:
                method_0217();
                break;

            case 8:
                method_0218();
                break;

            case 9:
                method_0219();
                break;


            default:
                printf("%s", "Opcao invalida");
                break;
            }

    } while(op != 0); 

    return 0;
}