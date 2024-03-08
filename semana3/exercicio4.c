#include <stdio.h>

int main() {
  int number, i;
  
  printf("Escreva um número inteiro: ");
  scanf("%d", &number);
  
  printf("Os divisores de %d são: ", number);
  
  for (i = 1; i <= number; i++) {
    if (number % i == 0) {
      printf("%d ", i);
    }
  }
  
  return 0;
}