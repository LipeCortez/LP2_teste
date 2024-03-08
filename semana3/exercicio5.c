#include<stdio.h>

int main(void){
  int n, i, sum = 0;

  printf("Escreva um número inteiro: ");
  scanf("%d", &n);

  for (i = 1; i < n; i++)
  {
      if (n % i == 0)
      {
          sum += i;
      }
  }

  if (sum == n)
  {
      printf("%d é um número inteiro perfeito\n", n);
  }
  else
  {
      printf("%d NÃO é um número inteiro perfeito\n", n);
  }
  return 0;
}