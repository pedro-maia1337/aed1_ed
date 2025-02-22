#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int lado = 0;

    printf("Insira o lado do quadrado: ");
    scanf("%d", &lado);

    int novo_lado = lado * 3;
    int area = novo_lado * novo_lado;

    printf("%s %d", "Area:", area);

    return 0;
}

/*
Entrada = 5
Resultado = 225
*/