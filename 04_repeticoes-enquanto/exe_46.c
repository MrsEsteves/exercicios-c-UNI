/*Crie um programa que calcule e mostre na tela o resultado da soma entre 6 + 8 + 10
+ 12 + 14 + ... + 98 + 100. */

#include <stdio.h>

int main(){

    int a = 6, soma = 0;

    while(a <= 100){
        printf("%d ", a);
        soma+=a;
        a+=2;
    }
    printf("\nO resultado da soma é %d", soma);

    return 0;
}