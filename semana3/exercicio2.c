#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int dado;

  srand(time(NULL)); 

  dado = 1 + rand()%99;

  printf("Jogue o Dado e tente adivinhar qual o resultado! \n");
  printf("Qual o seu palpite? ");

  int palpite;

  scanf("%d", &palpite);

  while (palpite < 1 || palpite > 99)
  {

    printf("Por favor insira um valor que esteja entre 1 e 100 \n");
    scanf("%d", &palpite);
  }
  if (palpite < dado)
  {

    printf("Você chutou muito baixo! O valor correto é: %d \n", dado);

  }
  else if (palpite > dado)
  {

    printf("Você chutou muito alto! O valor correto é: %d \n", dado);

  }
  else
  {

    printf("Parabéns!!! Você acertou! \n");

  }

   return 0;
}