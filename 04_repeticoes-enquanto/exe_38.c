// Escreva um programa que mostre na tela a seguinte contagem: 6 7 8 9 10 11 Acabou! 

#include <stdio.h>

int main(){
    int x = 6;
    while (x <= 11){
        printf("%d ", x);
        x++;
    }
    printf("Acabou!");

    return 0;
}