/*Faça um programa que leia as duas notas de um aluno em uma matéria e mostre na
tela a sua média na disciplina. Ex: Nota 1: 4.5 Nota 2: 8.5 A média entre 4.5 e 8.5 é igual
a 6.5  */

#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;

    printf("A media entre %.1f e %.1f e igual a %.1f", nota1, nota2, media);

    return 0;
}
