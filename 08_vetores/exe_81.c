/*Crie um programa que leia a idade de 8 pessoas e guarde-as em um vetor. No final,
mostre:
a) Qual é a média de idade das pessoas cadastradas
b) Em quais posições temos pessoas com mais de 25 anos
c) Qual foi a maior idade digitada (podem haver repetições)
d) Em que posições digitamos a maior idade */

#include <stdio.h>

int main(){
    int v[8], i;
    int idades = 0, maior_idade = 0;
    float media;

    for(i = 0; i < 8; i++){
        printf("%d Idade: ", i + 1);
        scanf("%d", &v[i]);
        idades += v[i];

        if(v[i] > maior_idade){
            maior_idade = v[i];
        }
    }

    media = (float)idades / 8;
    printf("\nMedia de idades das pessoas: %.2f", media);

    printf("\n---Posicoes que temos pessoas maiores de 25---\n");
    for(i = 0; i < 8; i++){
        if(v[i] > 25){
            printf("%d ", i);
        }
    }

    printf("\nMaior idade digitada: %d", maior_idade);

    printf("\n---Posicoes que digitamos a maior idade---\n");
    for(i = 0; i < 8; i++){
        if(v[i] == maior_idade){
            printf("%d ", i);
        }
    }

    return 0;
}