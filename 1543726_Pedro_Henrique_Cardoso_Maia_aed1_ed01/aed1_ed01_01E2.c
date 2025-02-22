#include <stdio.h>
#include <math.h>

int main (void) {

  float volume = 0.0;

  printf("Digite a area de circuferencia: ");
  scanf("%f", &volume);

  float novo_volume = volume * 3.0 / 5.0;

  float raio = sqrt(novo_volume / 3.14);

  printf("%s %2.f", "raio:", raio);

  return 0;
}


/*
Entrada = 5
Resultado = 1
*/
