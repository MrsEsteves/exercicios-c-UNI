/*[DESAFIO] Crie um jogo onde o computador vai sortear um número entre 1 e 5 o
jogador vai tentar descobrir qual foi o valor sorteado. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, sorteio;
    srand(time(NULL));
    sorteio = rand() % 5 + 1;

    printf("Descubra o numero(1 a 5): ");
    scanf("%d", &n);

    if (n == sorteio){
        printf("Você acertou!");
    }
    else{
        printf("Puts errou..., o numero era %d", sorteio);
    }

    return 0;
}