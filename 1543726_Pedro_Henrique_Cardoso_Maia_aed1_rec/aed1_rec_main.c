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
    int n, i;
    float x;

    // Acumuladores e contadores para cada grupo
    float soma_menores = 0, soma_medios = 0, soma_maiores = 0;
    int cont_menores = 0, cont_medios = 0, cont_maiores = 0;

    printf("Digite a quantidade de valores: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite um valor real: ");
        scanf("%f", &x);

        if (x < -21.75) {
            soma_menores += x;
            cont_menores++;
        } else if (x <= 71.25) {
            soma_medios += x;
            cont_medios++;
        } else {
            soma_maiores += x;
            cont_maiores++;
        }
    }

    // Cálculo das médias com verificação de divisão por zero
    float media_menores = (cont_menores > 0) ? soma_menores / cont_menores : 0;
    float media_medios = (cont_medios > 0) ? soma_medios / cont_medios : 0;
    float media_maiores = (cont_maiores > 0) ? soma_maiores / cont_maiores : 0;

    // Exibição dos resultados
    printf("Media dos valores menores que -21.75: %.2f\n", media_menores);
    printf("Media dos valores entre -21.75 e 71.25: %.2f\n", media_medios);
    printf("Media dos valores maiores que 71.25: %.2f\n", media_maiores);

    // Determinação da maior média
    float maior_media = maior_entre_tres(media_menores, media_medios, media_maiores);
    printf("A maior media e: %.2f\n", maior_media);

}

void method_ex16( void ) {
    float a, b, x;
    int dentro = 0, fora = 0;
    int acima = 0, abaixo = 0;

    // Leitura dos valores que definem o intervalo
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    // Garantir que a < b
    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }

    // Leitura dos valores até que x == 0
    printf("Digite os valores reais (0 para encerrar):\n");
    while (1) {
        scanf("%f", &x);
        if (x == 0) break;

        if (x > a && x < b) {
            dentro++;
        } else {
            fora++;
            if (x < a) {
                abaixo++;
            } else if (x > b) {
                acima++;
            }
        }
    }

    // Exibição dos resultados
    printf("\nQuantidade de valores dentro do intervalo aberto (%.2f, %.2f): %d\n", a, b, dentro);
    printf("Quantidade de valores fora do intervalo: %d\n", fora);

    // Cálculo e exibição das porcentagens dos valores fora do intervalo
    if (fora > 0) {
        float perc_acima = (acima * 100.0) / fora;
        float perc_abaixo = (abaixo * 100.0) / fora;
        printf("Porcentagem de valores acima do intervalo: %.2f%%\n", perc_acima);
        printf("Porcentagem de valores abaixo do intervalo: %.2f%%\n", perc_abaixo);
    } else {
        printf("Nenhum valor fora do intervalo para calcular porcentagens.\n");
    }

    footer();
}

void method_ex17( void ) {
    float x, y, z;

    // Leitura dos três valores
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    printf("Digite o valor de z: ");
    scanf("%f", &z);

    // Verificações
    if (ordem_crescente(x, y, z)) {
        printf("Os valores estao em ordem crescente.\n");
    } else if (ordem_decrescente(x, y, z)) {
        printf("Os valores estao em ordem decrescente.\n");
    } else {
        printf("Os valores nao estao em ordem crescente nem decrescente.\n");

        // Encontrar menor e maior valor
        float menor = x;
        if (y < menor) menor = y;
        if (z < menor) menor = z;

        float maior = x;
        if (y > maior) maior = y;
        if (z > maior) maior = z;

        printf("Menor valor: %.2f\n", menor);
        printf("Maior valor: %.2f\n", maior);
    }


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
