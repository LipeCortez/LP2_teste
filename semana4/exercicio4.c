#include <stdbool.h>

bool is_divisor(int N, int D) {
    if (N % D == 0) {
        return true;
    } else {
        return false;
    }
}

int count_divisors(int M) {
    int count = 0;
    for (int i = 1; i <= M; i++) {
        if (is_divisor(M, i)) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int number;
    printf("Digite um número inteiro: ");
    scanf("%d", &number);

    int divisors = count_divisors(number);

    printf("O número %d possui %d divisores.\n", number, divisors);

    return 0;
}
