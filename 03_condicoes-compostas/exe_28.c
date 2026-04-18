/*Faça um programa que leia a largura e o comprimento de um terreno retangular,
calculando e mostrando a sua área em m². O programa também devemostrar a
classificação desse terreno, de acordo com a lista abaixo: - Abaixo de 100m² = TERRENO
POPULAR - Entre 100m² e 500m² = TERRENO MASTER - Acima de 500m² = TERRENO VIP */

#include <stdio.h>
int main(){

    float lar, comp;

    printf("Largura do terreno: ");
    scanf("%f", &lar);

    printf("Comprimento do terreno: ");
    scanf("%f", &comp);

    if ((lar * comp) < 100){
        printf("TERRENO POPULAR");
    }
    else if (100 >= (lar * comp) == 500){
        printf("TERREN0 MASTER");
    }
    else{
        printf("TERRENO VIP");
    }

    return 0;

}
