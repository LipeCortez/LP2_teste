#include <stdio.h>

int main() {
  float peso;
  float altura;
  float imc;

  printf("Digite o seu peso em KG: \n");
  scanf("%f", &peso);

  printf("Digite a sua altura em metros: \n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\nO seu IMC é: %.2f\n", imc);

}