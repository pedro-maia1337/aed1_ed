#include <stdio.h>

int main(void) {

  int base = 0;
  int altura = 0;

  printf("Digite a base do retângulo: ");
  scanf("%d", &base);

  printf("Digite a altura do retângulo: "),
  scanf("%d", &altura);

  int dobroAltura = altura * 2;

  int area = (base * dobroAltura) / 2;

  printf("A área do retângulo é: %d", area);
  
  return 0;
}