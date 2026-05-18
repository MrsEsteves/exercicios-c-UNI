/*Faça um programa usando a estrutura “faça enquanto” que leia a idade de várias
pessoas. A cada laço, você deverá perguntar para o usuário se ele quer ou não continuar
a digitar dados. No final, quando o usuário decidir parar, mostre na tela: a) Quantas
idades foram digitadas b) Qual é a média entre as idades digitadas c) Quantas pessoas
tem 21 anos ou mais.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    int idade, idades = 0, n_idades = 0, mais_21 = 0;
    char resp;
    float media;

    do{
        printf("\nDigite a idade: ");
        scanf("%d", &idade);
        idades+=idade;
        n_idades+=1;

        if(idade >= 21){
            mais_21+=1;
        }

        printf("Deseja continuar? [S/N]: ");
        scanf(" %c", &resp);
    } while(toupper(resp) == 'S');

    if (n_idades > 0){
        media = (float)idades / n_idades;
    } else {
        media = 0;
    }

    printf("\nNumero de idades digitadas: %d", n_idades);
    printf("\nMedia entre as idades digitadas: %.2f", media);
    printf("\nPessoas com mais de 21 anos de idade: %d", mais_21);

    return 0;
}