/*[DESAFIO] Vamos melhorar o jogo que fizemos no exercício 32. A partir de agora, o
computador vai sortear um número entre 1 e 10 e o jogador vai ter 4 tentativas para
tentar acertar. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, sorteio, tentativa = 1;
    srand(time(NULL));
    sorteio = rand() % 10 + 1;

    while(tentativa <= 4){

        printf("\nDescubra o numero(1 a 10): ");
        scanf("%d", &n);

        if (n == sorteio){
            printf("Você acertou!");
            break;
        }
        else{
            if(tentativa < 4){
                printf("Errou, tente de novo");
            }
            tentativa++;
        }
    }

    if (n != sorteio) {
        printf("\nPuts vc perdeu, o numero era %d", sorteio);
    }

    return 0;
}