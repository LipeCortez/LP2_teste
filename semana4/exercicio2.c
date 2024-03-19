#include <stdio.h>

float c2f(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float f2c(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main(void) {
    int choice;
    float temperature, convertedTemperature;

    printf("Escolha uma opção:\n");
    printf("1. Conversor de Celsius para Fahrenheit\n");
    printf("2. Conversor de Fahrenheit para Celsius\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &temperature);
            convertedTemperature = c2f(temperature);
            printf("A temperatura convertida para Fahrenheit é: %2.f\n", convertedTemperature);
            break;

        case 2:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &temperature);
            convertedTemperature = f2c(temperature);
            printf("A temperatura convertida para Celsius é: %2.f\n", convertedTemperature);
            break;

        default:
            printf("Opção inválida\n");
    }

    return 0;
}
