/*Faça um programa que preencha automaticamente um vetor numérico com 8
posições, conforme abaixo: 999 999 999 999 999 999 999 999 0 1 2 3 4 5 6 7 */

# include <stdio.h>

int main(){
    int v[8];
    int i = 0;

    while(i < 8){
        v[i] = 999;
        printf("%d ", v[i]);
        i++;
    }

    i = 0;
    while( i < 8){
        printf("%d ", i);
        i++;
    }

    return 0;
}