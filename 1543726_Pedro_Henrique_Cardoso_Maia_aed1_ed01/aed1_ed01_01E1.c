#include <stdio.h>
#include <math.h>

int main(void) {

  float area = 0.0;

  printf("Digite a area de circuferencia: ");
  scanf("%f", &area);

  float nova_area = area * 7.0;

  float raio = sqrt(nova_area / 3.14);

  printf("%s %2.f", "Raio:", raio);

  return 0;
}

/*
Entrada = 5
Resultado = 3
*/