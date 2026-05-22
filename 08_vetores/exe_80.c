/*Faça um algoritmo que preencha um vetor de 30 posições com números entre 1 e 15
sorteados pelo computador. Depois disso, peça para o usuário digitar um número (chave)
e seu programa deve mostrar em que posições essa chave foi encontrada. Mostre
também quantas vezes a chave foi sorteada. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int v[30];
    int i, n;
    int contador = 0;

    srand(time(NULL));
    for(i = 0; i < 30; i++){
        v[i] = (rand() % 15) + 1;
        printf("%d ", v[i]); 
    }

    printf("\nDigite um numero (chave) entre 1 e 15: ");
    scanf("%d", &n);

    printf("\n---Chaves encontradas nas posicoes---\n");

    for(i = 0; i < 30; i++){
        if(v[i] == n){
            printf("%d ", i);
            contador++;
        }
    }
    printf("\nA chave %d foi sorteada %d vezes", n, contador);

    return 0;
}