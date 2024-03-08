#include <stdio.h>
#include <math.h>

int main() {
  float celso;
  float f;
  printf("Digite a temperatura em graus Celsius: \n");  
  scanf( "%f", &celso);

  f = (celso * 9/5) + 32;

  printf("\nA conversão de Celsius para fahrenheit é : %.f\n", f);

}