// Faça um algoritmo que leia um determinado ano e mostre se ele é ou não BISSEXTO.

#include <stdio.h>

int main() {
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d é BISSEXTO.", ano);
    }
    else {
        printf("O ano %d não é BISSEXTO.", ano);
    }
    return 0;
}
