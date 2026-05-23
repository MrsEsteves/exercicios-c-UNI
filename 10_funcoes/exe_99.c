/*Faça um programa que possua uma função chamada Potencia(), que vai receber dois
parâmetros numéricos (base e expoente) e vai calcular o resultado da exponenciação. Ex:
Potencia(5,2) vai calcular 52 = 25*/

#include <stdio.h>

int Potencia(int base, int expoente){
    int r = 1, i;

    for(i = 0; i < expoente; i++){
        r *= base;
    }

    return r;
}

int main(){
    int total;

    total = Potencia(2, 5);

    printf("%d", total);

    return 0;
}