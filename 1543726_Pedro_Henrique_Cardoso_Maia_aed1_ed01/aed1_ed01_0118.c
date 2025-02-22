#include <stdio.h>
#include <math.h>

int main(void) {

  float altura = 0.0;
  float comprimento = 0.0;
  float largura = 0.0;

  printf("Digite a altura do paralelepipedo: ");
  scanf("%f", &altura);

  printf("Digite o comprimento do paralelepipedo: ");
  scanf("%f", &comprimento);

  printf("Digite a largura do paralelepipedo: ");
  scanf("%f", &largura);

  float nova_altura = altura * 5.0;
  float novo_comprimento = comprimento * 5.0;
  float nova_largura = largura * 5.0;

  float volume = nova_altura * novo_comprimento * nova_largura;

  printf("%s %.2f\n", "Volume: ", volume);
  
  return 0;
}

/*
Entrada = 3, 4, 5
Resultado = 7.500
*/