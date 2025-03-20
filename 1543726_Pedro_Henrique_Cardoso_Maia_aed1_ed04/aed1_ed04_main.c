#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

    printf("Digite o inicio do intervalo: ");
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

    printf("%d\n %d", count, n - count);

    printf("Pressione enter para sair!!!!\n");
    getchar();
}

void method_0412() {
    char str[MAX] = "";

    printf("Digite a sequencia de caractestes");
    fgets(str, MAX, stdin);

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] > "a" && str[i] < "z" && str[i] > "c" && str[i] < "p"){
            //lógica
        }
    }


}

void method_0413() {
    
}

void method_0414() {
    
}


void method_0416() {
    
}

void method_0417() {
    

}

void method_0418(){
    

}

void method_0419(){
    
}

void method_0420(){
     
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
                printf("Pressione Enter para continuar...\n");
                getchar();
            default:
                printf("%s", "Opcao invalida");
                break;
        }

    } while(op != 0); 

    return 0;
}