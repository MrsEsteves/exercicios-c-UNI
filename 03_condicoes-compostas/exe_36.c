/*Um programa de vida saudável quer dar pontos atividades físicas que podem ser
trocados por dinheiro. O sistema funciona assim: - Cada hora de atividade física no mês
vale pontos - até 10h de atividade no mês: ganha 2 pontos por hora - de 10h até 20h de
atividade no mês: ganha 5 pontos por hora - acima de 20h de atividade no mês: ganha
10 pontos por hora - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos) Faça um
programa que leia quantas horas de atividade uma pessoa teve por mês, calcule e mostre
quantos pontos ela teve e quanto dinheiro ela conseguiu ganhar.*/


#include <stdio.h>

int main(){
    float horas, pontos, dinheiro;
    
    printf("Horas de atividade no mês: ");
    scanf("%f", &horas);

    if (horas <= 10){
        printf("Você ganhou %.2f pontos e R$%.2f", horas * 2, horas * 2 * 0.05);
    }
    else if (horas <= 20){
        printf("Você ganhou %.2f pontos e R$%.2f", horas * 5, horas * 5 * 0.05);
    }
    else{
        printf("Você ganhou %.2f pontos e R$%.2f", horas * 10, horas * 10 * 0.05);
    }

    return 0;
}