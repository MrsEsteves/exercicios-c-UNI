// Faça um algoritmo que mostre na tela a seguinte contagem: 10 9 8 7 6 5 4 3 Acabou!

#include <stdio.h>

int main(){
    int x = 10;
    while (x >= 3){
        printf("%d ", x);
        x--;
    }
    printf("Acabou!");

    return 0;
}