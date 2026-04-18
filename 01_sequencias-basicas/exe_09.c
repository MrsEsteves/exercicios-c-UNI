/*Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$) e
mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45. */

#include <stdio.h>

int main(){

    float d;

    printf("Quanto dinheiro voce tem na carteira?: ");
    scanf("%f", &d);

    printf("Voce pode comprar %.4f dolares.", d/3.45);

    return 0;
}
