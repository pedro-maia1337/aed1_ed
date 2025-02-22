#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int ladoR = 0;
    int ladoL = 0;

    printf("Insira o lado do quadrado: ");
    scanf("%d", &ladoR);

    printf("Insira outro lado do quadrado: ");
    scanf("%d", &ladoL);

    int novo_ladoR = ladoR * 2;
    int novo_ladoL = ladoL * 2;

    int area = novo_ladoL * novo_ladoR;

    printf("%s %d", "Area:", area);

    return 0;
}

/*
Entrada = 3 e 5
Resultado = 60
*/