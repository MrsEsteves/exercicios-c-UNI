/*Desenvolva uma lógica que leia os valores de A, B e C de uma equação do segundo
grau e mostre o valor de Delta. */

#include <stdio.h>

int main(){

    float a, b, c;

    printf("Valor de a: ");
    scanf("%f", &a);

    printf("Valor de b: ");
    scanf("%f", &b);

    printf("Valor de c: ");
    scanf("%f", &c);

    printf("Valor de Delta e igual a %.2f", (b*b)-(4*a*c));

    return 0;
}
