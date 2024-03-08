#include <stdio.h>
#include <math.h>

int main() {
  float raioc;
  float area;

  printf("Digite o raio do circulo: \n");  
  scanf( "%f", &raioc);

  area = M_PI * raioc*raioc;

  printf("\n Um circulo com raio de %f tem área igual a %f :\n", raioc, area);    

  return 0;
}