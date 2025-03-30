#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int x, int y) {
    int res = 1;

    for(int i = 0; i < y; i++) {
        res = res * x;
    }

    return res;
}

void multiplos_de_tres(int n, int i) {
    if(n == 0) {
        return;
    } 
    printf("%d ", 3 * i);
    multiplos_de_tres(n - 1, i + 1);
}

void multiplos_de_cinco_e_tres(int n, int i) {
    if(n == 0) {
        return;
    } 
    printf("%d ", ((3 * 5) * i));
    multiplos_de_cinco_e_tres(n - 1, i + 1);
}

void potencia_de_quatro(int n, int pot){
    if(n == 0){
        return;
    }
    pot = n * 2;
    printf("%d ", potencia(2, pot));
    potencia_de_quatro(n - 1, pot - 2);
}

void inverso_multiplos_de_tres(int n, int i) {
    if(n == 0) {
        return;
    } 
    printf("%lf ", 1.0 / (3 * i));
    inverso_multiplos_de_tres(n - 1, i + 1);
}

void denominador_crescente(int n, double x, int pot, double denominador) {
    if(n == 0) {
        return;
    } 
    denominador = pow(x, pot);
    printf("%lf ", 1.0 / denominador);
    denominador_crescente(n - 1, x, pot + 2, denominador);
}

int soma_valores_multiplos_de_tres(int n, int x, int count) {
    if (count == n) {
        return 0;
    }
    if (x % 3 == 0 && x % 4 != 0) {
        return x + soma_valores_multiplos_de_tres(n, x + 3, count + 1);
    }
    return soma_valores_multiplos_de_tres(n, x + 3, count);
}

double calcular_soma_inversos_multiplos_de_quatro(int n, int x, int count) {
    if (count == n) {
        return 0.0;
    }
    if (x % 4 == 0 && x % 5 != 0) {
        return (1.0 / x) + calcular_soma_inversos_multiplos_de_quatro(n, x + 4, count + 1);
    }
    return calcular_soma_inversos_multiplos_de_quatro(n, x + 4, count);
}

int adicao_naturais(int n, int x, int i, int count) {
    if(count == n) {
        return 0;
    }

    return x + adicao_naturais(n, x + i, i + 1, count + 1);
}

int soma_dos_quadrados(int n, int x, int count) {
    if(count == n) {
        return 0;
    }
    return (x + x) + soma_dos_quadrados(n, x + 1, count + 1);

}

double soma_dos_inversos(int n, double x, int count){
    if(count == n) {
        return 0.0;
    }

    return (1.0 / x) + soma_dos_inversos(n, x - (n - count), count + 1);
}

//Exibir Resultados
void resultado_soma_valores_multiplos_de_tres(int n){
    printf("n = %d => %d", n, soma_valores_multiplos_de_tres(n, 3, 0));
}

void resultado_calcular_soma_inversos_multiplos_de_quatro(int n){
    printf("n = %d => %lf", n, calcular_soma_inversos_multiplos_de_quatro(n, 4, 0));
}


void resultado_adicao_naturais(int n){
    printf("n = %d => %d", n, adicao_naturais(n, 5, 1, 0));
}


void resultado_soma_dos_quadrados(int n){
    printf("n = %d => %d", n, soma_dos_quadrados(n, 25, 0));
}

void resultado_soma_dos_inversos(int n){
    printf("n = %d => %lf", n, soma_dos_inversos(n, 13, 0));
}







