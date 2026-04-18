/*Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo
salário, com 15% de aumento. */

#include <stdio.h>

int main(){

    float s;

    printf("Qual o salario do funcionario?: ");
    scanf("%f", &s);

    printf("Novo salario: %.2f", s + (s * 0.15));

    return 0;
}
