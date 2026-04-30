/*Crie um programa que leia vários números pelo teclado e mostre no final o somatório
entre eles. Obs: O programa será interrompido quando o número 1111 for digitado */

#include <stdio.h>

int main(){
    int f = 1, soma = 0, n;

    while (f){
        printf("\nDigite um numero: ");
        scanf("%d", &n);

        if (n == 1111){
            f = 0;
        }
        else{
            soma+=n;
        }

    }
    printf("\nSoma total dos numeros: %d", soma);

    return 0;
}

/*int main(){
    int n, soma = 0;

    printf("\nDigite um numero: ");
    scanf("%d", &n);

    while(n != 1111){
        soma+=n;

        printf("\nDigite um numero: ");
        scanf("%d", &n);
    }

    printf("Soma total dos numeros: %d", soma);

    return 0;
}*/