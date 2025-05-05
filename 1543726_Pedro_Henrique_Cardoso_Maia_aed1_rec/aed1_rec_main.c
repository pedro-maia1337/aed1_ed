#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_rec.h"
#include <stdbool.h>
#include "io.h"

#define MAX 100

void cabecalho() {
    system("cls");
    print("-------------------------------------------------\n");
    print("1543726_Pedro_Henrique_Cardoso_Maia_recuperacao01\n");
    print("-------------------------------------------------\n");
    print("\n");
}

void method_ex11( void ) {
    int n = 0;
    int x = 0;
    int soma_pares = 0;
    int soma_impares = 0; 

    n = readint("Insira a quantidade desejada: ");

    for(int i = 0; i < n; i++) 
    {
        x = readint("Insira o numero: ");
        soma_pares      = soma_pares         +   soma_divisores_pares(x);
        soma_impares    = soma_impares       +   soma_divisores_impares(x);

        if(  soma_pares ==  soma_impares  )    print(  "iguais\n"   );
        if(  soma_pares >   soma_impares  )    print(  "pares\n"    );
        if(  soma_impares > soma_pares    )    print(  "impares\n"  );
       
    }

    //x = { 22, 121, 440, 581, 814 }


    footer();
}

void method_ex12( void ) { 
    int n = 0;
    int x = 0;
    bool resposta = false;

    n = readint("Insira a quantidade desejada: ");

    for(int i = 0; i < n; i++) 
    {
        x = readint("Insira o numero: ");

        resposta = primo(x);

        if (resposta) {
            printf("%d e primo!\n" ,x);
        } else {
            printf("%d nao e primo!\n" ,x);
        }
    }

    footer();
}

void method_ex13( void ) { //voltar
    char str[MAX];
    int tam = 0;
    int resposta = 0;

    print("Digite a cadeia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    tam = strlen(str);

    for(int i = 0; i < tam; i++) {
        resposta = testar_simbolo_logico(str[i]);
        resposta = testar_simbolo_aritmetico(str[i]);
        resposta = testar_simbolo_relacional(str[i]);
        resposta = testar_simbolo_separador(str[i]);
        
        printf("%d", resposta);

        switch (resposta) {
            case 0:
                print("Outro simbolo\n");
                break;
            case 1:
                print("Simbolo logico\n");
                break;
            case 2:
                print("Simbolo aritmetico\n");
                break;
            case 3:
                print("Simbolo relacional\n");
                break;
            case 4:
                print("Simbolo separador\n");
                break;
            default:
                print("Caracere invalido\n");
                break;
        }
    }


    footer();
}

void method_ex14( void ) {
    





    footer();
}

void method_ex15( void ) {
    /*

    ler um valor inteiro (n) do teclado;
    - ler outros (n) valores reais (x) do teclado, um por vez;
    - calcular e mostrar a média dos valores menores que -21.75;
    a média dos que estão entre -21.75 e 71.25, inclusive esses;
    e a média dos maiores que 71.25. Dizer qual a maior média de todas
    
    x = { -15.25, -12.50, 0.0, 6.75, 20.50, 50.0, 70.25, 85.25, 92.50, 98.75 }

    menores que -21.75 = 0;

    entre 21.75 e 71.25 = -15.25, -12.50, 0.0, 6.75, 20.50, 50.0, 70.25 = 17,10 *7

    maiores  que 71.25 = 85.25, 92.50, 98.75 = 92,16. maior média *4
    
    
   

    int n = 0;
    double x = 0.0;

    int resposta1 = 0;
    int resposta2 = 0;
    int resposta3 = 0;


    n = readint("Insira a quantidade desejada: ");

    for(int i = 0; i < n; i++) 
    {
        x = readdouble("Insira o numero: ");
        resposta1 = no_intervalo(-21.75, 0, x);
        resposta2 = no_intervalo(-21.75, 71.25, x);
        resposta3 = no_intervalo(71.25, 0, x);
    }

    printf("%d ", resposta1);
    printf("%d ", resposta2);
    printf("%d ", resposta3);
    
    footer();
     */

}

void method_ex16( void ) {
    

    footer();
}

void method_ex17( void ) {
    


    footer();
}

void method_ex18( void ) {
     

     footer();
}

void method_ex19( void ){
    



    footer();
}

void method_ex20( void ){
    



    footer();
}

int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento ex11\n");
        printf("2  - Procedimento ex12\n");
        printf("3  - Procedimento ex13\n");
        printf("4  - Procedimento ex14\n");

        printf("5  - Procedimento ex15\n");
        printf("6  - Procedimento ex16\n");
        printf("7  - Procedimento ex17\n");

        printf("8  - Procedimento ex18\n");
        printf("9  - Procedimento ex19\n");
        printf("10 - Procedimento ex20\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_ex11(); break;
            case 2:
                method_ex12(); break;
            case 3:
                method_ex13(); break;
            case 4:
                method_ex14(); break;
            case 5:
                method_ex15(); break;
            case 6:
                method_ex16(); break;
            case 7:
                method_ex17(); break;
            case 8:
                method_ex18(); break;
            case 9:
                method_ex19(); break;
            case 10:
                method_ex20(); break;
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