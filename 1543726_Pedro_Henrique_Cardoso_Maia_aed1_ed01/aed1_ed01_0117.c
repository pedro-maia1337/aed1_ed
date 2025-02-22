#include <stdio.h>
#include <math.h>

int main(void) {

  float lado = 0.0;

  printf("Digite o lado do cubo: ");
  scanf("%f", &lado);

  float novo_lado = lado * 4.0;

  float volume = pow(novo_lado, 3);

  printf("%s %.2f", "Volume:" , volume);
  
  return 0;
}

/*
Entrada = 5
Resultado = 8.000
*/