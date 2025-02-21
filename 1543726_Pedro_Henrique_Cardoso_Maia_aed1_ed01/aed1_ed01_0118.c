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

  float altMaior = altura * 5;
  float comprMaior = comprimento * 5;
  float largMaior = largura * 5;

  float volume = altMaior * comprMaior * largMaior;

  printf("O volume do paralelepipedo é: %.2f\n", volume);
  

  return 0;
}