#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int lado = 0;

    printf("Insira o lado do quadrado: ");
    scanf("%d", &lado);

    int area = lado * lado;
    int ladoFinal = lado * 3;
    int areaFinal = ladoFinal * ladoFinal;

    printf("%s %d", "Area quadrado final:", areaFinal);

    return 0;
}