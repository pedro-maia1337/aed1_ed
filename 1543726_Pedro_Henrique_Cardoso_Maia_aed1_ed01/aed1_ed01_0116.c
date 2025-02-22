#include <stdio.h>
#include <math.h>

int main(void) {

  float lado = 0.0;

  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);

  float novo_lado = lado / 3.0;

  float perimetro = (sqrt(3) * novo_lado) / 2.0;
  float area = (pow(novo_lado, 2) * sqrt(3) / 4.0);

  printf("%s %2.f\n", "Perimetro:", perimetro);
  printf("%s %2.f\n", "Area:", area);

  return 0;
}

/*
Entrada = 5
Resultado = 1
*/