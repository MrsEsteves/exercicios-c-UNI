/*Faça um algoritmo que leia a largura e altura de uma parede, calcule e mostre a área
a ser pintada e a quantidade de tinta necessária para o serviço, sabendo que cada litro
de tinta pinta uma área de 2metros quadrados. */

#include <stdio.h>

int main(){

    float lar, alt;

    printf("Digite a largura da parede: ");
    scanf("%f", &lar);

    printf("Digite a altura da parede: ");
    scanf("%f", &alt);

    printf("A quantidade de tinta necessaria e de %.2f litros", (lar * alt) / 2);

    return 0;
}
