#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ladoR = 0;
    int ladoL = 0;

    printf("Insira o lado do quadrado: ");
    scanf("%d", &ladoR);

    printf("Insira outro lado do quadrado: ");
    scanf("%d", &ladoL);

    int quartLadoR = ladoR / 4;
    int quartLadoL = ladoL / 4;

    int areaQuadrado = quartLadoL * quartLadoL;
    int perimetroQuadrado = 2 * (quartLadoL + quartLadoR);

    printf("%s %d", "Area do quadrado:", areaQuadrado);

    return 0;
}