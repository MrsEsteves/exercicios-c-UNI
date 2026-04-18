/*Escreva um programa para aprovar ou não o empréstimo bancário para a compra de
uma casa. O programa vai perguntar o valor da casa, o salário do comprador e em quantos
anos ele vai pagar. Calcule o valor da prestação mensal, sabendo que ela não pode
exceder 30% do salário ou então o empréstimo será negado. 
*/

#include <stdio.h>

int main(){

    float valor_casa, salario;
    int anos;

    printf("Qual o valor da casa: ");
    scanf("%f", &valor_casa);

    printf("Qual o salario do comprador: ");
    scanf("%f", &salario);

    printf("Quantos anos para pagar: ");
    scanf("%d", &anos);

    if (valor_casa / (anos*12) > salario * 0.3){
        printf("Empréstimo NEGADO. Prestação (R$ %.2f) excede 30%% do salário.\n", valor_casa / (anos*12));
    }
    else{
        printf("Empréstimo APROVADO! Prestação: R$ %.2f\n", valor_casa / (anos*12));
    }

    return 0;
}