#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int soma_divisores_pares(int x) {
    int resto = 0;
    int contador = 0;
    int divisor = 0;

    for(int i = 1; i <= x; i++){
        resto = x % i;
        if(resto == 0){
            divisor = i;
            if(divisor % 2 == 0) contador = contador + 1;
        }
    }

    printf("%d", contador);

    return contador;
}


int soma_divisores_impares(int x) {
    int resto = 0;
    int contador = 0;
    int divisor = 0;

    for(int i = 1; i <= x; i++){
        resto = x % i;
        if(resto == 0){
            divisor = i;
            if(divisor % 2 != 0) contador = contador + 1;
        }
    }

    printf("%d", contador);

    return contador;
}


