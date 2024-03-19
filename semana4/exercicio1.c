#include <stdio.h>

float funcao(float n1, float n2, float n3)
{
  float resultado;
  resultado = n1 + n2 + n3;
  return(resultado);  
}

int main(void) {
  float n1, n2, n3, resultado;
  printf("Digite o 1º numero: ");
  scanf("%f", &n1);

  printf("Digite o 2º numero: ");
  scanf("%f", &n2);

  printf("Digite o 3º número: ");
  scanf("%f", &n3);

  resultado = funcao(n1,n2,n3);

  printf("O seu resultado é: %2.f", resultado);

}