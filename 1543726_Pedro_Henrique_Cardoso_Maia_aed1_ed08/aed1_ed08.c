#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define MAX 100

int *writeArray(int n, int *arr, int valor) {
    for(int i = 0; i < n; i++) {
        *(arr + i) = valor;
    }

    return arr;
}


int *writeArrayODD(int n, int *arr, int valor) {
    for(int i = 0; i < n; i++) {
        *(arr + i) = valor;
          valor = valor + 2;
    }

    return arr;
}


void lerArranjo(int n, int *arr) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int lerPares(int n, int *arr) {
    writeArrayODD(n, arr, 0);
    return n;
}


void gerarInt(int a, int b) {
    FILE *arquivo = fopen("DADOS.txt", "a+");

    int n = 0;
    int valor = 0;
    scanf("%d", &n); getchar();

    int arr[n];

    srand(time(NULL));

    for(int i = 0; i < n; i++) {
        valor = (rand() % (b - a + 1)) + a;
        *(arr + i) = valor;
        fprintf(arquivo, "%d\n", *(arr + i));
    }

    lerArranjo(n, arr);    

    fclose(arquivo);
}

int *lerArquivo(int n, char *str, int *arr) {
    FILE *arquivo = fopen(str, "rt");
    int dados = 0;

    if(arquivo == NULL ){
        printf("Erro ao abrir o arquivo.\n"); getchar();
        return 0;
    }

    for(int i = 0; i < n; i++){
        fscanf(arquivo, "%d", &dados);
        arr[i] = dados;
    }

    fclose(arquivo);
    return arr;
}


int acharMenorPar(int n, int *arr){
    int menor_valor = 1000;
    int par = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] < menor_valor){
            menor_valor = arr[i];
            if(menor_valor % 2 == 0) {
                par = menor_valor;
            }
        }
    }
    
    return par;
}