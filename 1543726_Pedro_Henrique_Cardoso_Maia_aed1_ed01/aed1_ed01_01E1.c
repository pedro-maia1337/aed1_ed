#include <stdio.h>
#include <math.h>

int main(void) {

  float area = 0.0;

  printf("Digite a area de circuferencia: ");
  scanf("%f", &area);

  float aumArea = area * 7;

  float raio = sqrt(aumArea / 3.14);

  return 0;
}