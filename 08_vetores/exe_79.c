/*Desenvolva um programa que leia 10 números inteiros e guarde-os em um vetor. No
final, mostre quais são os números pares que foram digitados e em que posições eles
estão armazenados. */

#include <stdio.h>

int main(){
    int v[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("%d numero: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n---Numeros Pares---\n");
    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            printf("%d ", v[i]);
        }
    }
    printf("\n---Posicao dos numeros pares---\n");
    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0){
            printf("%d ", i);
        }
    }

    return 0;
}