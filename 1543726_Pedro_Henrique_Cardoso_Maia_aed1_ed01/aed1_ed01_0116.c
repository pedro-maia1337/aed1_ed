#include <stdio.h>
#include <math.h>


int main(void) {

  float lado = 0.0;

  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);

  float tercoLado = lado / 3;

  float altura = (sqrt(3) * tercoLado) / 2;
  float area = (pow(tercoLado, 2) * sqrt(3) / 4);

  
  printf("A altura do triangulo é: %f\n", altura);
  printf("A area do triangulo é: %f\n", area);

  return 0;
}