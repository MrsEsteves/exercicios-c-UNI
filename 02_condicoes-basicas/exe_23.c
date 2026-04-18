/*Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos para
todos, mas especialmente para mulheres. Faça um programa que leia nome, sexo e o
valor das compras do cliente e calcule o preço com desconto. Sabendo que: - Homens
ganham 5% de desconto - Mulheres ganham 13% de desconto */

#include <stdio.h>

int main() {
    char nome[50], sexo;
    float valor;

    printf("Nome: ");
    scanf(" %[^\n]s", nome);

    printf("Sexo [M/F]: ");
    scanf(" %c", &sexo);

    printf("Valor das compras: R$ ");
    scanf("%f", &valor);

    if (sexo == 'F' || sexo == 'f') {
        printf("Ola %s, o valor final com desconto e de R$ %.2f", nome, valor - (valor * 0.13));
    }
    else if (sexo == 'M' || sexo == 'm') {
        printf("Ola %s, o valor final com desconto e de R$ %.2f", nome, valor - (valor * 0.05));
    }
    else {
        printf("Sexo invalido");
    }

    return 0;

}
