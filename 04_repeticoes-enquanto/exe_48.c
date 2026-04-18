// Faça um programa que leia 7 números inteiros e no final mostre o somatório entre eles.

#include <stdio.h>

int main (){
    int c = 1, num, soma = 0;
    while (c <= 7){
        printf("Digite o %dº valor: ", c);
        scanf("%d", &num);
        soma += num;
        c++;
    }
    printf("O samatório é de  %d", soma);

    return 0;
}