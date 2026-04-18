/*Crie um programa que leia duas notas de um aluno e calcule a sua média, mostrando
uma mensagem no final, de acordo com a média atingida: - Média até 4.9: REPROVADO
- Média entre 5.0 e 6.9: RECUPERAÇÃO - Média 7.0 ou superior: APROVADO  */

#include <stdio.h>

int main(){

    float a, b;

    printf("Nota 1: ");
    scanf("%f", &a);

    printf("Nota 2: ");
    scanf("%f", &b);

    if (((a+b)/2) <= 4.9 ){
        printf("REPROVADO");
    }
    else if (5.0 <= ((a+b)/2) == 6.9){
        printf("RECUPERAÇÃO");
    }
    else{
        printf("APROVADO");
    }


    return 0;

}
