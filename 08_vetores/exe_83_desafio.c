/*[DESAFIO] Crie uma lógica que preencha um vetor de 20 posições com números
aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida, mostre os números
gerados e depois coloque o vetor em ordem crescente, mostrando no final os valores
ordenados*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int v[20];
    int i, j, troca;

    srand(time(NULL));

    for(i = 0; i < 20; i++){
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }

    printf("\n---Numeros em ordem crescente---\n");

    for(i = 0; i < 20; i++){
        for(j = 0; j < 19; j++){
            if(v[j] > v[j + 1]){
                troca = v[j];
                v[j] = v[j  + 1];
                v[j + 1] = troca;
            }
        }
    }

    for(i = 0; i < 20; i++){
        printf("%d ", v[i]);
    }

    return 0;
}