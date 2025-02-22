#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int ladoR = 0;
    int ladoL = 0;

    printf("Insira o lado do quadrado: ");
    scanf("%d", &ladoR);

    printf("Insira outro lado do quadrado: ");
    scanf("%d", &ladoL);

    int novo_ladoR = ladoR / 4;
    int novo_ladoL = ladoL / 4;

    int area = novo_ladoR * novo_ladoL;
    int perimetro = 2 * (novo_ladoL + novo_ladoR);

    printf("%s %d %s %d", "Area:", area, "Perimetro:", perimetro);

    return 0;
}

/*
Entrada = 3 e 5
Resultado = 0 e 2
*/