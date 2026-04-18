/*Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor. Ex: Digite um número: 9 O antecessor de 9 é 8 O sucessor de 9 é 10  */

#include <stdio.h>

int main(){

    int n, suc, ant;

    printf("Digite um numero: ");
    scanf("%d", &n);

    suc = n + 1;
    ant = n - 1;

    printf("O antecessor de %d e %d \nO sucessor de %d e %d", n, ant, n, suc);

    return 0;
}
