/*Faça um programa que preencha automaticamente um vetor numérico com 8
posições, conforme abaixo: 999 999 999 999 999 999 999 999 0 1 2 3 4 5 6 7 */

#include <stdio.h>

int main(){
    int v[8];
    int i;

    for(i = 0; i < 8; i++){
        v[i] = 999;
        printf("%d ", v[i]);
    }

    for(i = 0; i < 8; i++){
        printf("%d ", i);
    }

    return 0;
}