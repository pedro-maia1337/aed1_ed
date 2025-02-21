#include <stdio.h>
#include <math.h>

int main(void) {

  float raio = 0.0;

  printf("Digite o raio do circulo: ");
  scanf("%f", &raio);

  float raioAumentado = raio * 4;

  float area = M_PI * pow(raioAumentado, 2) / 2;

  printf("A area do circulo é: %.2f", area);

  return 0;
}