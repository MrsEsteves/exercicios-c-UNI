/*Crie um programa que preencha automaticamente
(usando lógica, não apenas atribuindo diretamente) um vetor numérico com 15 posições
com os primeiros elementos da sequência de Fibonacci: 1 1 2 3 5 8 13 21 34 55 89 144
233 377 610 987 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15*/

#include <stdio.h>

int main(){
    int v[16];
    int i;

    v[0] = 1;
    v[1] = 1;
    for(i = 2; i < 16; i++){
        v[i] = v[i - 1] + v[i - 2];
        printf("%d ", v[i]);
    }

    for(i = 0; i < 16; i++){
        printf("%d ", i);
    }

    return 0;
}