/*Faça um algoritmo que leia a idade de vários alunos de uma turma. O programa vai
parar quando for digitada a idade 999. No final, mostre quantos alunos existem na turma
e qual é a média de idade do grupo*/

#include <stdio.h>

int main(){
    int idade, aluno = 0, f = 1;
    float media = 0;

    while(f){
        printf("\nIdade: ");
        scanf("%d", &idade);

        if(idade == 999){
            f = 0;
        }
        else{
            aluno++;
            media+=idade;
        }


    }
    printf("Quantidade de alunos que existem: %d \nMedia de idade: %.2f", aluno, media/aluno);

    return 0;
}