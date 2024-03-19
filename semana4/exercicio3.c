#include <stdio.h>

void print_multiplication_table(int N) {
    for(int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }
}

int main(void) {
    for(int i = 1; i <= 9; i++) {
        printf("Tabuada do %d:\n", i);
        print_multiplication_table(i);
        printf("\n");
    }

    return 0;
}