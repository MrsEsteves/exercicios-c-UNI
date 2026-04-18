/*Crie um programa que leia 6 números inteiros e no final mostre quantos deles são
pares e quantos são ímpares. */

#include <stdio.h>

int main(){
    int x = 1, num, par = 0, impar = 0;
    while(x <= 6){
        printf("Digite o %dº valor: ", x);
        scanf("%d", &num);
        x++;

        if (num % 2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("Numeros pares %d \nNumeros impars %d", par, impar);



    return 0;
}