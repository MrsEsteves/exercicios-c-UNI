/*[DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele já
fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule quantos
dias de vida um fumante perderá e exiba o total em dias.  */

#include <stdio.h>

int main() {
    int cigarros_dia, anos_fumando;

    printf("Quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarros_dia);
    printf("Quantos anos você já fumou?: ");
    scanf("%d", &anos_fumando);


    printf("Você perderá aproximadamente %.2f dias de vida.", ((cigarros_dia * 365 * anos_fumando) * 10) / 1440);

    return 0;
}
