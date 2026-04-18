/*Desenvolva um aplicativo que mostre na tela o resultado da expressão 500 + 450 +
400 + 350 + 300 + ... + 50 + 0 */

#include <stdio.h>

int main(){
    int a = 500, soma = 0;

    while(a >= 0){
        printf("%d ", a);
        soma+=a;
        a-=50;
    }
    printf("\nO resultado da soma é %d", soma);

    return 0;
}