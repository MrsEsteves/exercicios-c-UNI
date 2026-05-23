/*Refaça o exercício 91, só que agora em forma de função Maior(), mas faça uma
adaptação que vai receber TRÊS números como parâmetro e vai retornar qual foi o maior
entre eles. */

#include <stdio.h>

int Maior(int a, int b, int c){
    int maiorValor;

    if(a >= b && a >= c){
        maiorValor = a;
    } else if(b >= a && b >= c){
        maiorValor = b;
    } else{
        maiorValor = c;
    }

    return maiorValor;
}

int main(){
    int n1, n2, n3, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    resultado = Maior(n1, n2, n3);

    printf("\nO maior numero digitado foi: %d\n", resultado);

    return 0;
}