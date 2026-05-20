/* [DESAFIO] Faça um programa que mostre os 10 primeiros elementos da Sequência de
Fibonacci: 1 1 2 3 5 8 13 21... */

#include <stdio.h>

int main(){
    int t1 = 0, t2 = 1, prox_n;
    int i;

    for(i = 1; i <= 10; i++){
        prox_n = t1 + t2;

        t1 = t2;
        t2 = prox_n;

        printf("%d ", t1);
    }

    return 0;
}