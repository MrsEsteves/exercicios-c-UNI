/*Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO
PROMOCIONAL, com 5% de desconto. */

#include <stdio.h>

int main(){

    float p;

    printf("Valor do produto: ");
    scanf("%f", &p);

    printf("Preço promocional: %.2f", p - (p * 0.05));

    return 0;
}
