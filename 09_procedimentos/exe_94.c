/*[DESAFIO] Desenvolva um aplicativo que tenha um procedimento chamado
Fibonacci() que recebe um único valor inteiro como parâmetro, indicando quantos
termos da sequência serão mostrados na tela. O seu procedimento deve receber esse
valor e mostrar a quantidade de elementos solicitados. Obs: Use os exercícios 70 e 75
para te ajudar na solução Ex: Fibonacci(5) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> FIM
Fibonacci(9) vai gerar 1 >> 1 >> 2 >> 3 >> 5 >> 8 >> 13 >> 21 >> 34 >> FIM */

#include <stdio.h>

void Fibonacci(int valor){
    int i;
    int t1 = 1, t2= 1, prox;

    for(i = 1; i <= valor; i++){
        printf("%d ", t1);
        prox = t1 + t2;
        t1 = t2;
        t2 = prox;
    }
}

int main(){

    Fibonacci(9);

    return 0;
}