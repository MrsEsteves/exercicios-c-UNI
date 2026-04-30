/*Desenvolva um aplicativo que leia o peso e a altura de 7 pessoas, mostrando no final:
a) Qual foi a média de altura do grupo b) Quantas pessoas pesam mais de 90Kg c) Quantas
pessoas que pesam menos de 50Kg tem menos de 1.60m d) Quantas pessoas que medem
mais de 1.90m pesam mais de 100Kg.*/

#include <stdio.h>

int main(){
    float peso, altura, media_alt = 0;
    int acima_90 = 0, menos_160 = 0, acima_100 = 0, i = 1;

    while(i <= 7){
        printf("\n--- %dª pessoa ---", i);

        printf("\nPeso: ");
        scanf("%f", &peso);

        printf("Altura: ");
        scanf("%f", &altura);

        media_alt+=altura;

        if(peso > 90){
            acima_90++;
        }

        if(peso < 50 && altura < 1.60){
            menos_160++;
        }

        if(altura > 1.90 && peso > 100){
            acima_100++;
        }

        i++;
    }
    printf("\nMedia de altura do grupo: %.2f", media_alt/7);
    printf("Pessoas que pesam mais de 90kg: %d", acima_90);
    printf("Pessoas que pesam menos de 50Kg que tem menos de 1.60m: %d", menos_160);
    printf("Pessoas que medem mais de 1.90m que pesam mais de 100Kg: %d", acima_100);

    return 0;

}