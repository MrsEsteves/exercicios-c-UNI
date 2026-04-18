/*Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba o
valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.  */

#include <stdio.h>

int main() {
    float v;

    printf("Qual a velocidade do carro (Km/h)? ");
    scanf("%f", &v);

    if (v > 80) {
        printf("Voce foi multado, o valor da multa é de R$%.2f.", (v - 80) * 5);
    }
    else {
        printf("Velocidade dentro do limite.");
    }

    return 0;
}
