/*Refaça o exercício 90, só que agora em forma de função Somador(), que vai receber
dois parâmetros e vai retornar o resultado da soma entre eles para o programa principal. */

#include <stdio.h>

int Somador(int a, int b){
    int resultado;
    resultado = a + b;

    return resultado;
}

int main(){
    int n1, n2, total;

    printf("Primeiro numero: ");
    scanf("%d", &n1);

    printf("Segundo numero: ");
    scanf("%d", &n2);

    total = Somador(n1, n2);

    printf("A soma deu: %d", total);

    return 0;
}