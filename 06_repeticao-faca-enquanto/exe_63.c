/*Crie um programa usando a estrutura “faça enquanto” que leia vários números. A
cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na tela: a) O
somatório entre todos os valores b) Qual foi o menor valor digitado c) A média entre
todos os valores d) Quantos valores são pares */

#include <stdio.h>
#include <ctype.h>

int main(){
    int n, q_numeros = 0, soma = 0, menor_valor, valores_pares = 0;
    float media;
    char resp;

    do{
        printf("\nDigite um numero: ");
        scanf("%d", &n);

        soma+=n;
        q_numeros+=1;

        if(q_numeros == 1) {
            menor_valor = n;
        } else if (n < menor_valor) {
            menor_valor = n;
        }

        if (n % 2 == 0) {
            valores_pares+=1;
        }

        printf("Deseja continuar? [S/N]: ");
        scanf(" %c", &resp);
    } while (toupper(resp) == 'S');

    if (q_numeros > 0) {
        media = (float)soma / q_numeros;
    } else {
        media = 0;
    }

    printf("\nSomatorio de todos os valores: %d", soma);
    printf("\nMenor valor digitado: %d", menor_valor);
    printf("\nMedia entre todos os valores: %.2f", media);
    printf("\nQuantidades de valores que são pares: %d", valores_pares);

    return 0;
}