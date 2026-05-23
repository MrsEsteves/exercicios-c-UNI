/*Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses valores para
um procedimento Somador() que vai calcular e mostrar a soma entre eles. */

#include <stdio.h>

void Somador(int n1, int n2){
    printf("Soma: %d", n1 + n2);
}

int main(){

    Somador(3, 4);

    return 0;
}