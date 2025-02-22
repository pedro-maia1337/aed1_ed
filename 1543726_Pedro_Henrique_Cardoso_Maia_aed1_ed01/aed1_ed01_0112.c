#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int lado = 0;

    printf("Insira o lado do quadrado: ");
    scanf("%d", &lado);

    int novo_lado = lado / 2;
    int perimetro = novo_lado * 4;
    int area = novo_lado * novo_lado;

    printf("%s %d %s %d", "Area:", area, "Perimetro:", perimetro);

    return 0;
}

/*
Entrada = 5
Resultado = 4 e 8
*/