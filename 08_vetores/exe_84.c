/*Crie um programa que leia o nome e a idade de 9 pessoas e guarde esses valores em
dois vetores, em posições relacionadas. No final, mostre uma listagem contendo apenas
os dados das pessoas menores de idade. */

#include <stdio.h>

int main(){
    char nomes[9][50];
    int idades[9];
    int i;

    for(i = 0; i < 9; i++){
        printf("%d nome: ", i + 1);
        scanf("%s", nomes[i]);

        printf("%d idade: ", i + 1);
        scanf("%d", &idades[i]);
    }

    printf("\n---Pessoas menores de idade---\n");
    for(i = 0; i < 9; i++){
        if(idades[i] < 18){
            printf("\nNome: %s | Idade: %d", nomes[i], idades[i]);
        }
    }

    return 0;
}