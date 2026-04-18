/*Desenvolva um programa que leia o nome de um funcionário, seu salário, quantos
anos ele trabalha na empresa e mostre seu novo salário, reajustado de acordo com a
tabela a seguir: - Até 3 anos de empresa: aumento de 3% - entre 3 e 10 anos: aumento
de 12.5% - 10 anos ou mais: aumento de 20%*/

#include <stdio.h>

int main(){

    char nome[100];
    float sal;
    int anos;

    printf("Nome do funcionario: ");
    scanf("%[^\n]s", nome);

    printf("Salario do funcionario: ");
    scanf("%f", &sal);

    printf("A quantos anos o funcionario trabalha na empresa: ");
    scanf("%d", &anos);

    if (anos <= 3){
        printf("Novo salário: %.2f", sal + (sal * 0.03));
    }
    else if (3 < anos < 10){
        printf("Novo salário: %.2f", sal + (sal * 0.125));
    }
    else{
        printf("Novo salario: %.2f", sal + (sal * 0.2));
    }

    return 0;
}