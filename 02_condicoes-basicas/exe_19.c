/*Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua média
e mostre na tela. No final, analise a média e mostre se o aluno teve ou não um bom
aproveitamento (se ficou acima da média 7.0). */

#include <stdio.h>

int main() {
    char nome[50];
    float n1, n2;

    printf("Nome do aluno: ");
    scanf(" %[^\n]s", nome);

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    if (((n1 + n2) / 2) >= 7.0) {
        printf("O/A aluno/a %s teve um bom aproveitamento.", nome);
    } else {
        printf("O/A aluno/a %s esta abaixo da media esperada.", nome);
    }

    return 0;
}
