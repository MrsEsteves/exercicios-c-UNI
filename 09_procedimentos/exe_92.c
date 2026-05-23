/*Crie uma lógica que leia um número inteiro e passe para um procedimento
ParOuImpar() que vai verificar e mostrar na tela se o valor passado como parâmetro é
PAR ou ÍMPAR. */

#include <stdio.h>

void ParOuImpar(int n1){
    if(n1 % 2 == 0){
        printf("PAR");
    } else {
        printf("IMPAR");
    }
}

int main(){
    int nDigitado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &nDigitado);

    ParOuImpar(nDigitado);

    return 0;
}