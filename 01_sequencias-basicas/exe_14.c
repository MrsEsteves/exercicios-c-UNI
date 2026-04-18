/*A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um
programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, sabendo
que o carro custa R$90 por dia e R$0,20 por Km rodado. */

#include <stdio.h>

int main(){

    float km;
    int d;

    printf("Kilometros percorridos: ");
    scanf("%f", &km);

    printf("Quantidade dias alugado: ");
    scanf("%d", &d);

    printf("Total a pagar: %.2f", (d * 90)+(km * 0.20));

    return 0;
}
