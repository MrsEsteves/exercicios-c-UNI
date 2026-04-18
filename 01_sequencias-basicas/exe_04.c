/*Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório entre
eles. Ex: Digite um valor: 8 Digite outro valor: 5 A soma entre 8 e 5 é igual a 13.  */

#include <stdio.h>

int main(){

    int n1, n2, soma;

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma entre %d e %d e igual a %d ", n1, n2, soma);

    return 0;
}
