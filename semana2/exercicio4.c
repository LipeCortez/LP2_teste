#include <stdio.h>
#include <math.h>

int main() {
  float cat1;
  float cat2;
  float hipotenusa;

  
  printf("Digite o valor do 1º Cateto: \n");  
  scanf( "%f", &cat1);

  printf("Digite o valor do 2º Cateto: \n");
  scanf( "%f", &cat2);

  hipotenusa = sqrtf((cat1*cat1) + (cat2*cat2)); 

  printf("\nO valor da hipotenusa é : %.2f\n", hipotenusa);    

  return 0;
}