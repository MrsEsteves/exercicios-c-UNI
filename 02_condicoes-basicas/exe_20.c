// Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou ÍMPAR.

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("PAR.", n);
    }
    else {
        printf("ÍMPAR.", n);
    }

    return 0;
}
