/*Desenvolva um programa que mostre na tela a seguinte contagem: 100 95 90 85 80
... 0 Acabou! */

#include <stdio.h>

int main(){
    int x = 100;
    while (x >= 0){
        printf("%d ", x);
        x-=5;
    }
    printf("Acabou!");

    return 0;
}