#include <stdio.h>
#include <math.h>

int main(void) {

  float raio = 0.0;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  float novo_raio = raio * 4.0;

  float area = 3.14 * pow(novo_raio, 2) / 2.0;

  printf("%s %.2f", "Area:", area);

  return 0;
}

/*
Entrada = 5
Resultado = 628
*/