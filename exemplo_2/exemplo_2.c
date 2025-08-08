#include <stdio.h>
#include <stdlib.h>

// declarando que a função "is_prime" é de fora do código C
extern int is_prime(int n);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <positive_integer>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    if (n < 2) {
        printf("Quatidade de números primos entre 0 e %d é: 0\n", n);
        return 0;
    }

    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (is_prime(i)) {
            count++;
        }
    }

    printf("Quatidade de números primos entre 0 e %d é: %d\n", n, count);
    return 0;
}