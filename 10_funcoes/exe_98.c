/*Crie um programa que tenha uma função SuperSomador(), que vai receber dois
números como parâmetro e depois vai retornar a soma de todos os valores no intervalo
entre os valores recebidos. Ex: SuperSomador(1, 6) vai somar 1 + 2 + 3 + 4 + 5 + 6 e vai
retornar 21 SuperSomador(15, 19) vai somar 15 + 16 + 17 + 18 + 19 e vai retornar 85*/

#include <stdio.h>

int SuperSomador(int inicio, int fim) {
    int i;
    int somaTotal = 0;

    for (i = inicio; i <= fim; i++) {
        somaTotal += i; 
    }

    return somaTotal;
}

int main(){
    int n1, n2, resultado;

    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &n1);

    printf("Digite o valor final do intervalo: ");
    scanf("%d", &n2);

    resultado = SuperSomador(n1, n2);

    printf("A soma do intervalo entre %d e %d eh: %d\n", n1, n2, resultado);

    return 0;
}