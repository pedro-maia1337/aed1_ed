#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void multiplos_de_tres(int n, int x, int count) {
    if(n == count) return;
    x = x + (3 * 1);
    printf("%d ", x);
    multiplos_de_tres(n, x, count + 1);
}

void multiplos_de_tres_decrescente(int n, int x, int count) {
    if(n == count) return;
    printf("%d ", x);
    x = x - (3 * 1);
    multiplos_de_tres_decrescente(n, x, count + 1);
}

void inverso_multiplos_de_tres(int n, double x, int count) {
    
    if(n == count) return;
    printf("%lf ", 1.0 / x);
    x = x + (3.0 * 1.0);
    inverso_multiplos_de_tres(n, x, count + 1);
}

void inverso_multiplos_de_tres_decrescente(int n, double x, int count) {
    if(n == count) return;
    printf("%lf ", 1.0 / x);
    x = x - (3.0 * 1.0);
    inverso_multiplos_de_tres_decrescente(n, x, count + 1);
}