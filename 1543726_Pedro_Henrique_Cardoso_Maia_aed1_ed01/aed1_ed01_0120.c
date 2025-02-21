#include <stdio.h>
#include <math.h>

int main(void) {

  float raio = 0.0;

  printf("Digite o raio da esfera: ");
  scanf("%f", &raio);

  float drecRaio = raio * 5 / 8;


  float volume = (4 * 3.14 * pow(drecRaio, 3)) / 3;

  printf("O volume da esfera é: %2.f", volume);

  return 0;
}