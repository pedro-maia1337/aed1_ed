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
        soma_pares        =   soma_pares         +   soma_divisores_pares(x);
        soma_impares      =   soma_impares       +   soma_divisores_impares(x);

        if(  soma_pares   ==  soma_impares  )    print(     "iguais\n"     );
        if(  soma_pares   >   soma_impares  )    print(     "pares\n"      );
        if(  soma_impares >   soma_pares    )    print(    "impares\n"     );
       
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
        if ((resposta = testar_simbolo_logico(str[i])) ||
            (resposta = testar_simbolo_aritmetico(str[i])) ||
            (resposta = testar_simbolo_relacional(str[i])) ||
            (resposta = testar_simbolo_separador(str[i]))) {
        } else {
            resposta = 0;
        }       

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
    char c;
    
    c = readchar("Digite o char: ");

    int resposta = testar_simbolo(c);

    switch (resposta) {
        case 0:
            printf("Outro símbolo\n");
            break;
        case 1:
            printf("Símbolo lógico\n");
            break;
        case 2:
            printf("Símbolo aritmético\n");
            break;
        case 3:
            printf("Símbolo relacional\n");
            break;
        case 4:
            printf("Símbolo separador\n");
            break;
        default:
            printf("Caractere inválido\n");
            break;
    }

    footer();
}

void method_ex15( void ) { //check, modularizar 
    //x = { -15.25, -12.50, 0.0, 6.75, 20.50, 50.0, 70.25, 85.25, 92.50, 98.75 }
    int n, i;
    double x;

    double soma_menores = 0, soma_medios = 0, soma_maiores = 0;
    int cont_menores = 0, cont_medios = 0, cont_maiores = 0;

    n = readint("Digite a quantidade de valores:");

    for (i = 0; i < n; i++) {

        x = readdouble("Digite um valor real: ");

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
    double media_menores = (cont_menores > 0) ? soma_menores / cont_menores : 0;
    double media_medios = (cont_medios > 0) ? soma_medios / cont_medios : 0;
    double media_maiores = (cont_maiores > 0) ? soma_maiores / cont_maiores : 0;

    
    printf("Media dos valores menores que -21.75: %.2lf\n", media_menores);
    printf("Media dos valores entre -21.75 e 71.25: %.2lf\n", media_medios);
    printf("Media dos valores maiores que 71.25: %.2lf\n", media_maiores);

    double maior_media = maior_entre_tres(media_menores, media_medios, media_maiores);
    printf("A maior media e: %.2f\n", maior_media);

    footer();
}

void method_ex16( void ) { //modularizar, refazer, voltarrrrrr
    /*
    a = 15
    b = 45
    x = { -20, -11, 0, 1, 10, 21, 36, 51, 70, 80, -1 }
    */

    int a = 0;
    int b = 0;
    double soma = 0.0;

    a = readint("Digite o valor inferior de intervalo: ");
    b = readint("Digite o valor superior do intervalo: ");

    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }

    soma = calcular_soma_inversos(a, b);

    printf("%lf", soma);

    footer();
}

void method_ex17( void ) { //arumar isso aqui 
    /*
    a = 15
    b = 45
    x = { -20, -11, 0, 1, 10, 21, 36, 51, 70, 80, -1 }

    Quantidade de valores dentro do intervalo: 2
    Porcentagem de valores acima do intervalo: 37.50;
    Porcentagem de valores abaixo do intervalo: 62.50;
    */

    double a, b;
    int dentro = 0, fora = 0;
    int acima = 0, abaixo = 0;

    a = readdouble("Digite o valor de a: ");

    b = readdouble("Digite o valor de b: ");
     
    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }

    processar_valores(a, b, &dentro, &fora, &abaixo, &acima);
    
    printf("\nQuantidade de valores dentro do intervalo aberto (%.2f, %.2f): %d\n", a, b, dentro); // modularizar ? 
    printf("Quantidade de valores fora do intervalo: %d\n", fora);

    if (fora > 0) {
        double perc_acima = (acima * 100.0) / fora;
        double perc_abaixo = (abaixo * 100.0) / fora;
        printf("Porcentagem de valores acima do intervalo: %.2f%%\n", perc_acima);
        printf("Porcentagem de valores abaixo do intervalo: %.2f%%\n", perc_abaixo);
    } else {
        printf("Nenhum valor fora do intervalo para calcular porcentagens.\n");
    }


    footer();
}

void method_ex18( void ) {

    /*
    
    x = 10, y = 20, z = 30 = Saída: Os valores estao em ordem crescente.
    x = 30, y = 20, z = 10 = Saida  Os valores estao em ordem decrescente.
    x = 10, y = 10, z = 10 = Saida: Os valores nao estao em ordem crescente nem decrescente. valores iguais

    x = 10, y = 20, z = 30 = Saída: Os valores estao em ordem crescente.
    x = 30, y = 20, z = 10 = Saída: Os valores estao em ordem decrescente.
    x = 10, y = 20, z = 10 = Saída: Os valores nao estao em ordem crescente nem decrescente. maior valor: 20. menor valor: 10

    */

    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    x = readdouble("Digite o valor de x: ");
    y = readdouble("Digite o valor de y: ");
    z = readdouble("Digite o valor de z: ");

    if (ordem_crescente_num(x, y, z)) {
        printf("Os valores estao em ordem crescente.\n");
    } else if (ordem_decrescente_num(x, y, z)) {
        printf("Os valores estao em ordem decrescente.\n");
    } else {
        printf("Os valores nao estao em ordem crescente nem decrescente.\n");

        double menor = x;
        if (y < menor) menor = y;
        if (z < menor) menor = z;

        double maior = x;
        if (y > maior) maior = y;
        if (z > maior) maior = z;

        if(maior == menor) {
            printf("Valores iguais");
        }
        
        if(maior != menor) {
            printf("Menor valor: %.2f\n", menor);
            printf("Maior valor: %.2f\n", maior);
        } 
    }

    footer();
}

void method_ex19( void ) {

    /*
    x = '1', y = '2', z = '3'   Saída: Os caracteres estao em ordem alfabetica crescente.
    x = '3', y = '2', z = '1'   Saída: Os caracteres estao em ordem alfabetica decrescente.
    x = '1', y = '1', z = '1'   Saída: Os caracteres nao estao em ordem alfabetica crescente nem decrescente.

    x = 'a', y = 'b', z = 'c'   Saída: Os caracteres estao em ordem alfabetica crescente.
    x = 'c', y = 'b', z = 'a'   Saída: Os caracteres estao em ordem alfabetica decrescente.
    x = 'b', y = 'b', z = 'b'   Saída: Os caracteres nao estao em ordem alfabetica crescente nem decrescente.
    */

    char x[100], y[100], z[100]; //melhorar isso aqui? 

    printf("Digite a string x: ");
    scanf("%s", x); getchar();
    printf("Digite a string y: ");
    scanf("%s", y); getchar();
    printf("Digite a string z: ");
    scanf("%s", z); getchar();

    /*x = readchar("Digite o caractere x: ");

    y = readchar("Digite o caractere y: ");

    z = readchar("Digite o caractere z: ");*/

    if (ordem_crescente(x, y, z)) { 
        printf("Os caracteres estao em ordem alfabetica crescente.\n");
    } else if (ordem_decrescente(x, y, z)) {
        printf("Os caracteres estao em ordem alfabetica decrescente.\n");
    } else {
        printf("Os caracteres nao estao em ordem alfabetica crescente nem decrescente.\n");
    }

    footer();
}

void method_ex20( void ){
    /*
    x = 'abc'                   Saída: Os caracteres estao em ordem alfabetica crescente.
    y = 'cde'                   
    z = 'fgh'

    x = 'fgh'                   Saída: Os caracteres estao em ordem alfabetica decrescente.
    y = 'cde'                   
    z = 'abc'  

    z = 'abc'                   Saída: As cadeias nao estao em ordem alfabetica crescente nem decrescente.
    x = 'ab'                    Menor String: ab                         
    y = 'abczh'                 Maior String: abczh
                       
    */


    char x[MAX], y[MAX], z[MAX];
    char *menor, *maior;
    

    // Leitura das três cadeias de caracteres
    printf("Digite a string x: ");
    scanf("%s", x); getchar();
    printf("Digite a string y: ");
    scanf("%s", y); getchar();
    printf("Digite a string z: ");
    scanf("%s", z); getchar();

    if (ordem_crescente(x, y, z)) {
        printf("As cadeias estao em ordem alfabetica crescente.\n");
    } else if (ordem_decrescente(x, y, z)) {
        printf("As cadeias estao em ordem alfabetica decrescente.\n");
    } else { // modularizar isso 
        printf("As cadeias nao estao em ordem alfabetica crescente nem decrescente.\n");

        // Inicializar menor e maior com x
        menor = x;
        maior = x;

        // Verificar qual é a menor
        if (strcmp(y, menor) < 0) menor = y;
        if (strcmp(z, menor) < 0) menor = z;

        // Verificar qual é a maior
        if (strcmp(y, maior) > 0) maior = y;
        if (strcmp(z, maior) > 0) maior = z;

        printf("Menor string: %s\n", menor);
        printf("Maior string: %s\n", maior);

    } 
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
