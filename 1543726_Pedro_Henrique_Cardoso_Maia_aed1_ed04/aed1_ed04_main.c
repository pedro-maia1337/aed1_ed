#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "aed1_ed04.h"

#define MAX 100

void cabecalho() {
    system("cls");
    printf("----------------------------------------\n");
    printf("1543726_Pedro_Henrique_Cardoso_Maia_ed02\n");
    printf("-----------------------------------------\n");
    printf("\n");
}

void method_0411() {
    double valor = 0.0;
    int n = 0;
    double a = 0.0;
    double b = 0.0;
    int count = 0;
    double aux = 0.0;

    printf("Digite o inicio do intervalo: ");
    scanf("%lf", &a); getchar();

    printf("Digite o final do intervalo: ");
    scanf("%lf", &b);  getchar();

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n); getchar();

    for(int i = 0; i < n; i++) {
        printf("Digite o valor: ");
        scanf("%lf", &valor); getchar();

        if(b < a) {
            aux = a;
            a = b;
            b = aux;
        }

        if(valor > a && valor < b) count++;
    }

    printf("dentro do intervalo: %d\nfora do intervalo: %d\n", count, n - count);

    printf("Pressione enter para sair!!!!\n");
    getchar();

    //Exemplo: n = 10 e [ 10.4 : 23.4 ] com { 5.1, 10.5, 12.4, 14.2, 15.3, 18.3, 20.4, 21.7, 23.1, 24.2 }
    //Resultado esperado = 8 e 2
}

void method_0412() {                
    char str[MAX] = "";
    int count = 0;

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    for(int i = 0; i < strlen(str); i++) {
        if(verificar_maiuscula(str[i]) == 0 && str[i] > 'c' && str[i] < 'p') {
            count ++;
        }
    }

    printf("Resultado: %d\n\n", count);
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = AaKkLmM0*Nx 
    //resultado esperado = 2
}

void method_0413() {
    char str[MAX] = "";
    int count = 0;

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    count = contar_string(str);

    printf("Resultado: %d\n\n", count);
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = AaKkLmM0*Nx 
    //resultado esperado = 2
}

void method_0414() {
    char str[MAX] = "";

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Resultado: %s\n\n", concatenar_string(str));
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = AaKkLmM0*Nx 
    //resultado esperado = km
}

void method_0415() {
    char str[MAX] = "";
    int count = 0;

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    count = contar_string_maiuscula_minuscula(str);

    printf("Resultado: %d\n\n", count);
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = AaKkLmM0*Nx 
    //resultado esperado = 6
}

void method_0416() {
    char str[MAX] = "";

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Resultado: %s\n\n", concatenar_string_maiuscula_minuscula(str));
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = AaKkLmM0*Nx 
    //resultado esperado = KkLmMN
}

void method_0417() {
    char str[MAX] = "";
    int count = 0;

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    count = contar_par(str);

    printf("Resultado: %d\n\n", count);
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = A1b2C3d4E5f6
    //resultado esperado = 3
}

void method_0418() {
    char str[MAX] = "";

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Resultado: %s\n\n", concatenar_string_nao_alfanumerica(str));
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = (A1b2+C3d4)*E5f6
    //resultado esperado = (+)*
}

void method_0419(){
    char str[MAX] = "";

    printf("Digite a sequencia de caracteres: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Resultado: %s\n\n", concatenar_string_alfanumerica(str));
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequência = A1b2C3d4E5f6
    //resultado esperado = A1b2C3d4E5f6
}

void method_0420(){
    int n = 0;
    int total = 0;

    printf("Digite a quantidade de str a serem lidas: ");
    scanf("%d", &n); getchar();

    char str[n][MAX];

    for (int i = 0; i < n; i++) {
        printf("Palavra %d: ", i + 1);
        fgets(str[i], MAX, stdin);
        str[i][strcspn(str[i], "\n")] = '\0'; 
    }

    for (int i = 0; i < n; i++) {
        int qtd_alfanumericos = contar_string_alfanumerica(str[i]);
        total += qtd_alfanumericos;
    }

    printf("Resultado: %d\n\n", total);
    printf("Pressione enter para sair!!!!\n");
    getchar();

    //sequências = { (A1b2+C3d4)*E5f6, [P&&Q]||[R&&!S], (a<b&&b<c) }
    //Resultado esperado = 20;
}


int main(int argc, char *argv[]) {
    int op;

    do {
        cabecalho();
        printf("1  - Procedimento 0411\n");
        printf("2  - Procedimento 0412\n");
        printf("3  - Procedimento 0413\n");
        printf("4  - Procedimento 0414\n");

        printf("5  - Procedimento 0415\n");
        printf("6  - Procedimento 0416\n");
        printf("7  - Procedimento 0417\n");

        printf("8  - Procedimento 0418\n");
        printf("9  - Procedimento 0419\n");
        printf("10 - Procedimento 0420\n");

        printf("0 - Sair\n");

        printf("\n");

        printf("Escolha uma opcao: ");

        scanf("%d", &op);

        getchar();

        switch (op) {
            case 1:
                method_0411(); break;
            case 2:
                method_0412(); break;
            case 3:
                method_0413(); break;
            case 4:
                method_0414(); break;
            case 5:
                method_0415(); break;
            case 6:
                method_0416(); break;
            case 7:
                method_0417(); break;
            case 8:
                method_0418(); break;
            case 9:
                method_0419(); break;
            case 10:
                method_0420(); break;
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