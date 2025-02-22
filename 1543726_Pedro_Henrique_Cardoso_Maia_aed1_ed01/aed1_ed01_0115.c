#include <stdio.h>

int main(void) {

  int base = 0;
  int altura = 0;

  printf("Digite a base do retangulo: ");
  scanf("%d", &base);

  printf("Digite a altura do retangulo: "),
  scanf("%d", &altura);

  int nova_altura = altura * 2;

  int area = (base * nova_altura) / 2;

  printf("%s %d", "Area:", area);
  
  return 0;
}

/*
Entrada = 3 e 4
Resultado = 12
*/