#include <stdio.h>
#include <math.h>

int main(void) {

  float volume = 0.0;

  printf("Digite a area de circuferencia: ");
  scanf("%f", &volume);

  float drecVol = volume * 3 / 5;

  float raio = sqrt(volume / 3.14);

  printf("O raio da esfera é: %.2f\n", raio);

  return 0;
}