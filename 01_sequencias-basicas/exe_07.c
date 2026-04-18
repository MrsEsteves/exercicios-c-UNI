/*Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a sua terça parte.
Ex: Digite um número: 3.5 O dobro de 3.5 é 7.0 A terça parte de 3.5 é 1.16666 */

#include <stdio.h>

int main(){

    float n, dobro, terca;

    printf("Digite um numero: ");
    scanf("%f", &n);

    dobro = n * 2;
    terca = n / 3;

    printf("O dobro de %.2f e %.2f \nA terca parte de %.2f e %.2f", n, dobro, n, terca);

    return 0;
}
