/*Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando na
tela uma das mensagens abaixo: - O primeiro valor é o maior - O segundo valor é o maior
- Não existe valor maior, os dois são iguais */

#include <stdio.h>

int main(){

    int a, b;

    printf("Primeiro numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    if (a > b){
        printf("O primeiro valor é o maior");
    }
    else if (b > a){
        printf("O segundo valor é o maior");
    }
    else{
        printf("Não existe valor maior, os dois são iguais");
    }

    return 0;
}
