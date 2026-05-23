/* Desenvolva um algoritmo que leia dois valores pelo teclado e passe esses valores para
um procedimento Maior() que vai verificar qual deles é o maior e mostrá-lo na tela. Caso
os dois valores sejam iguais, mostrar uma mensagem informando essa característica.*/

#include <stdio.h>

void Maior(int n1, int n2){
    if(n1 > n2){
        printf("%d e maior que %d", n1, n2);
    } else if (n2 > n1){
        printf("%d e maior que %d", n2, n1);
    } else {
        printf("Os dois numeros sao iguais");
    }
}

int main(){

    Maior(25, 25);

    return 0;
}