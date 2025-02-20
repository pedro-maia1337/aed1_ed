#include <stdio.h>
#include <math.h>

int main(void) {

  float lado = 0.0;

  printf("Digite o lado do cubo: ");
  scanf("%f", &lado);

  float ladoMaior = lado * 4;

  float volume = pow(ladoMaior, 3);

  printf("O volume do cubo é: %.2f\n", volume);
  

  return 0;
}