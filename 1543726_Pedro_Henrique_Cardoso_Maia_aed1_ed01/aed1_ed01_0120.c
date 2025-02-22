#include <stdio.h>
#include <math.h>

int main(void) {

  float raio = 0.0;

  printf("Digite o raio da esfera: ");
  scanf("%f", &raio);

  float novo_raio = raio * 5.0 / 8.0;

  float volume = (4 * 3.14 * pow(novo_raio, 3)) / 3.0;

  printf("%s %2.f", "Volume:", volume);

  return 0;
}

/*
Entrada = 5
Resultado = 128
*/