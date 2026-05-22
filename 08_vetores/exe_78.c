/*Escreva um programa que leia 15 números e guarde-os em um vetor. No final, mostre
o vetor inteiro na tela e em seguida mostre em que posições foram digitados valores que
são múltiplos de 10. */

#include <stdio.h>

int main(){
    int v[15];
    int i;

    for(i = 0; i < 15; i++){
        printf("%d numero: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n");
    for(i = 0; i < 15; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    for(i = 0; i < 15; i++){
        if(v[i] % 10 == 0){
            printf("%d ", i);
        }
    }
    

    return 0;
}