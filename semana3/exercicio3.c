#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int dado;

  srand(time(NULL)); 

  dado = 1 + rand()%100;

  int palpite;
  int tentativas = 0;

  do {
    printf("Jogue o Dado e tente adivinhar qual o resultado! \n");
    printf("Qual o seu palpite? ");

    scanf("%d", &palpite);

    if (palpite < 1 || palpite > 100) {
      printf("Por favor insira um valor que esteja entre 1 e 100. \n");
    } else if (palpite < dado) {
      printf("Você chutou muito baixo! Tente novamente. \n");
      tentativas++;
    } else if (palpite > dado) {
      printf("Você chutou muito alto! Tente novamente. \n");
      tentativas++;
    } else {
      printf("Parabéns!!! Você acertou em %d tentativas! \n", tentativas + 1);
      break;
    }

    if (tentativas == 5) {
      printf("Você excedeu o número máximo de tentativas. O valor correto era: %d \n", dado);
      break;
    }
  } while (1);

  return 0;
}
