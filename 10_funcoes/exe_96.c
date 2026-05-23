/*Crie um programa que tenha uma função Media(), que vai receber as 2 notas de um
aluno e retornar a sua média para o programa principal. */

#include <stdio.h>

float Media(float nota1, float nota2){
    float resultado;
    resultado = (nota1 + nota2)/2;

    return resultado;
}

int main(){

    float n1, n2, total;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    total = Media(n1, n2);

    printf("Media das notas: %.2f", total);

    return 0;
}