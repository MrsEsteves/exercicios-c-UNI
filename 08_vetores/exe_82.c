/*Faça um algoritmo que leia a nota de 10 alunos de uma turma e guarde-as em um
vetor. No final, mostre:
a) Qual é a média da turma
b) Quantos alunos estão acima da média da turma
c) Qual foi a maior nota digitada
d) Em que posições a maior nota aparece*/

#include <stdio.h>

int main(){
    float v[10];
    int i, alunos_acima_media = 0;
    float media, notas = 0, maior_nota = 0;

    for(i = 0; i < 10; i++){
        printf("%d nota: ", i + 1);
        scanf("%f", &v[i]);
        notas += v[i];

        if(v[i] > maior_nota){
            maior_nota = v[i];
        }
    }

    media = notas / 10.0;
    printf("\nMedia da turma: %.2f", media);

    for(i = 0; i < 10; i++){
        if(v[i] > media){
            alunos_acima_media++;
        }
    }
    printf("Quantidade de alunos acima da media: %d", alunos_acima_media);

    printf("\nMaior nota digitada: %.2f", maior_nota);
    
    printf("\n---Posicoes da maior nota digitada---\n");

    for(i = 0; i < 10; i++){
        if(maior_nota == v[i]){
            printf("%d ", i);
        }
    }

    return 0;
}