/*Crie um programa que leia o número de dias trabalhados em um mês e mostre o
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25 por
hora trabalhada. */

#include <stdio.h>

int main() {
    int dias;

    printf("Digite o número de dias trabalhados no mês: ");
    scanf("%d", &dias);

    printf("O salário do funcionário e de R$ %.2f", dias * 8 * 25);

    return 0;
}
