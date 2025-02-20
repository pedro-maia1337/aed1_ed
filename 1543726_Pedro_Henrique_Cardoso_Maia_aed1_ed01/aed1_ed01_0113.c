#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ladoR = 0;
    int ladoL = 0;

    printf("Insira o lado do quadrado: ");
    scanf("%d", &ladoR);

    printf("Insira outro lado do quadrado: ");
    scanf("%d", &ladoL);

    int aumLadoR = ladoR * 2;
    int aumLadoL = ladoL * 2;

    int areaQuadrado = aumLadoL * aumLadoL;

    printf("%s %d", "Area do quadrado aumentada:", areaQuadrado);

    return 0;
}