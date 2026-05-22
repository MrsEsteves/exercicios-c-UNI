/* Faça um programa que leia 7 nomes de pessoas e guarde-os em um vetor. No final,
mostre uma listagem com todos os nomes informados, na ordem inversa daquela em que
eles foram informados*/

#include <stdio.h>

int main(){
    char v[7][50];
    int i;

    for(i = 0; i < 7; i++){
        printf("Nome: ");
        scanf("%s", v[i]);
    }

    for(i = 6; i >= 0; i--){
        printf("%s ", v[i]);
    }

    return 0;
}