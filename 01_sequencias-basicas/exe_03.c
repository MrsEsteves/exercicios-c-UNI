/*Crie um programa que leia o nome e o salário de um funcionário, mostrando no final uma mensagem.
Ex: Nome do Funcionário: Maria do Carmo Salário: 1850,45 O
funcionário Maria do Carmo tem um salário de R$1850,45 em Junho. */

#include <stdio.h>

int main(){

    char nome[50];
    float salario;

    printf("Nome do funcionario: ");
    scanf("%[^\n]s", nome);

    printf("Salario do funcionario: ");
    scanf("%f", &salario);

    printf("O funcionario %s tem um salario de R$%f em Junho", nome, salario);

    return 0;
}
