/*Escreva um programa que leia um número qualquer e mostre a tabuada desse
número, usando a estrutura “para”. Ex: Digite um valor: 5 5 x 1 = 5 5 x 2 = 10 5 x 3 = 15 ...*/

#include <stdio.h>

int main(){
    int i, n, r;

    printf("Digite um valor: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        r = n * i;
        printf("\n%d x %d = %d", n, i, r);
    }

    return 0;
}