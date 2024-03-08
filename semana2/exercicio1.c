#include <stdio.h>

int main() {
  int a, b, soma, subtracao, multiplicacao, divisao;

  printf("Digite 2 valores: \n");
  scanf("%d %d", &a, &b);

  soma = a + b;
  subtracao = a - b;
  multiplicacao = a * b;
  divisao = a / b;

  printf("\nSoma: %d\n", soma);
  printf("Subtração: %d\n", subtracao);
  printf("Multiplicação: %d\n", multiplicacao);
  printf("Divisão: %d\n", divisao);


  
}