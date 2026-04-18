/*Uma empresa precisa reajustar o salário dos seus funcionários, dando um aumento
de acordo com alguns fatores. Faça um programa que leia o salário atual, o gênero do
funcionário e há quantos anos esse funcionário trabalha na empresa. No final, mostre o
seu novo salário, baseado na tabela a seguir: - Mulheres - menos de 15 anos de empresa:
+5% - de 15 até 20 anos de empresa: +12% - mais de 20 anos de empresa: +23% - Homens
- menos de 20 anos de empresa: +3% - de 20 até 30 anos de empresa: +13% - mais de 30
anos de empresa: +25%*/

#include <stdio.h>

int main(){
    float sal_atual;
    char gen;
    int anos;

    printf("Salário atual: ");
    scanf("%f", &sal_atual);

    printf("Genero do funcionario: (M ou F): ");
    scanf(" %c", &gen);

    printf("Há quantos anos o funcionario trabalha na empresa: ");
    scanf("%d", &anos);

    if (gen == 'F' || gen == 'f'){
        if (anos < 15){
            printf("Aumento de 5%%. Salário novo será de R$%.2f", sal_atual + (sal_atual * 0.05));
        }
        else if (anos <= 20){
            printf("Aumento de 12%%. Salário novo será de R$%.2f", sal_atual + (sal_atual * 0.12));
        }
        else{
            printf("Aumento de 23%%. Salário novo será de R$%.2f", sal_atual + (sal_atual * 0.23));
        }
    }

    else if (gen == 'M' || gen == 'm'){
        if (anos < 20){
            printf("Aumento de 3%%. Salário novo será de R$%.2f", sal_atual + (sal_atual * 0.03));
        }
        else if (anos <= 30){
            printf("Aumento de 13%%. Salário novo será de R$%.2f", sal_atual + (sal_atual * 0.13));
        }
        else {
            printf("Aumento de 25%%. Salário novo será de R$%.2f", sal_atual + (sal_atual * 0.25));
        }
    }


    return 0;
}