/*Faça um algoritmo que pergunte a distância que um passageiro deseja percorrer em
Km. Calcule o preço da passagem, cobrando R$0.50 por Km para viagens até 200Km e
R$0.45 para viagens mais longas. */

#include <stdio.h>

int main(){
    float d;

    printf("Quantos km pretende percorrer?: ");
    scanf("%f", &d);

    if (d > 200) {
        printf("O preco da passagem e de R$%.2f", d * 0.45);
    }
    else{
        printf("O preço da passagem e de R$%.2f", d * 0.50);
    }

    return 0;
}
