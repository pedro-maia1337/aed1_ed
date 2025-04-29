#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void gravar_numeros_multiplos_de_quatro(int n) {
    int x = 4;
    int multiplo = 0;

    FILE *arquivo = fopen("resultado01.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado01.txt.\n");
        return;
    }

    for(int i = 1; i <= n; i++){
        multiplo = x * i;
        fprintf(arquivo, "%d ", multiplo);
    }

    fprintf(arquivo, "\n");
    fclose(arquivo);
}

void gravar_numeros_multiplos_de_quinze(int n) {
    int multiplo = 15 * (2 * n);

    FILE *arquivo = fopen("resultado02.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    for(int i = 1; i <= n; i++){
        fprintf(arquivo, "%d ", multiplo);
        multiplo = multiplo - 30;
    }

    fprintf(arquivo, "\n");
    fclose(arquivo);
}


void gravar_potencia_de_tres(int n) {
    int x = 3;
    int resultado = 0;

    FILE *arquivo = fopen("resultado03.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    for(int i = 0; i < n; i++){
        resultado = pow((double) x, (double) i);
        fprintf(arquivo, "%d ", resultado);
    }

    fprintf(arquivo, "\n");
    fclose(arquivo);
}

void gravar_inverso_potencia_de_tres(int n) {
    int x = 3;
    double resultado = 0.0; 

    FILE *arquivo = fopen("resultado04.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    for(int i = n - 1; i >= 0; i--){
        resultado = 1.0 / pow((double) x, (double) i);
        fprintf(arquivo, "%lf ", resultado);
    }

    fprintf(arquivo, "\n");
    fclose(arquivo);
}

void gravar_inverso_potencia(int n, int x) {
    double resultado = 0.0; 
    int pot = 1;

    FILE *arquivo = fopen("resultado05.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado02.txt.\n");
        return;
    }

    fprintf(arquivo, "%d ", pot);

    for(int i = 1; i < n; i++){
        pot = pot + 2;
        resultado = 1.0 / pow((double) x, (double) pot);
        fprintf(arquivo, "%lf ", resultado);
    }

    fprintf(arquivo, "\n");
    fclose(arquivo);
}

void gravar_soma(int n) {
    double resultado_soma = 0.0;
    double valor = 0.0;

    FILE *arquivo_leitura = fopen("resultado05.txt", "rt");
    FILE *arquivo = fopen("resultado06.txt", "a+");

    if(arquivo_leitura == NULL ){
        printf("Erro ao abrir o arquivo01.txt.\n");
        return;
    }

    if(arquivo == NULL ){
        printf("Erro ao abrir o arquivo06.txt.\n");
        return;
    }
    
    for(int i = 0; i < n; i++) {
        fscanf(arquivo_leitura, "%lf", &valor);
        printf("%lf ", valor);
        resultado_soma = resultado_soma + valor;
    }

    fprintf(arquivo, "%lf", resultado_soma);
    fprintf(arquivo, "\n");

    fclose(arquivo);
    fclose(arquivo_leitura);
}

void gravar_soma_inversos(int n) { 
    double soma = 0.0;
    double valor = 0;

    FILE *arquivo_leitura = fopen("resultado04.txt", "rt");
    FILE *arquivo = fopen("resultado07.txt", "a+");

    if(arquivo_leitura == NULL ){
        printf("Erro ao abrir o arquivo01.txt.\n");
        return;
    }

    if(arquivo == NULL ){
        printf("Erro ao abrir o arquivo06.txt.\n");
        return;
    }
    
    for(int i = 0; i < n; i++) {
        fscanf(arquivo_leitura, "%lf", &valor);
        printf("%lf ", valor);
        soma = soma + valor;
        
    }
    
    fprintf(arquivo, "%lf", soma);
    fprintf(arquivo, "\n");

    fclose(arquivo);
    fclose(arquivo_leitura);
}

int fib(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

void gravar_numeros_pares_fib(int n) {
    int dados = 0;
    int aux = 2;

    FILE *arquivo = fopen("resultado08.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado08.txt.\n");
        return;
    }

    for(int i = 0; i < n; i++){
        dados = fib(aux);
        aux = aux + 3;
        fprintf(arquivo, "%d ", dados);
    }

    fprintf(arquivo, "\n");

    fclose(arquivo);
}

void gravar_string_maiusculas(char *str){
    int tam = 0;
    int count = 0;
    
    FILE *arquivo = fopen("resultado09.txt", "a+");
    
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado09.txt.\n");
        return;
    }

    str[strlen(str) - 1] = '\0';

    tam = strlen(str);

    fprintf(arquivo, "%s", str);

    for(int i = 0; i < tam; i++){
        if(str[i] >= 'A' && str[i] <= 'Z') {
            count++;
        }
    }

    fprintf(arquivo, " %d", count);
    fprintf(arquivo, "\n");
    fclose(arquivo);
}

void gravar_string_maior_que_tres(char *str){
    int tam = 0;
    int count = 0;

    FILE *arquivo = fopen("resultado10.txt", "a+");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo resultado10.txt.\n");
        return;
    }

    str[strlen(str) - 1] = '\0';

    tam = strlen(str);

    fprintf(arquivo, "%s", str);

    for(int i = 0; i < tam; i++){
        if(str[i] >= '0' && str[i] <= '9' && str[i] >= '3') { 
            count++;
        }
    }

    fprintf(arquivo, " %d", count);
    fprintf(arquivo, "\n");
    fclose(arquivo);
}
