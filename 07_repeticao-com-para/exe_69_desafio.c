/*[DESAFIO] Desenvolva um programa que leia o primeiro termo e a razão de uma PA
(Progressão Aritmética), mostrando na tela os 10 primeiros elementos da PA e a soma
entre todos os valores da sequência.*/

#include <stdio.h>

int main(){
    int a1, r, termo, soma = 0, n;

    printf("Primeiro termo: ");
    scanf("%d", &a1);

    printf("Razao da PA: ");
    scanf("%d", &r);

    termo = a1;

    for(n = 1; n <= 10; n++){
        printf("\n%d termo: %d", n, termo);

        soma += termo;
        termo += r;

    }
    printf("\n\nSoma de todos os valores: %d", soma);
    
    return 0;
}