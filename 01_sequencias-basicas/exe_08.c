/*Desenvolva um programa que leia uma distância em metros e mostre os valores
relativos em outras medidas.
Ex: Digite uma distância em metros: 185.72 A distância de 85.7m
corresponde a: 0.18572Km 1.8572Hm 18.572Dam 1857.2dm 18572.0cm
185720.0mm */

#include <stdio.h>

int main(){

    float d;

    printf("Digite uma disntancia em metros: ");
    scanf("%f", &d);

    printf("A distancia de %.2f corresponde a: %.4fKm %.4fHm %.4fDam %.4fdm %.4fcm %.4fmm", d, d/1000, d/100, d/10, d*10, d*100, d*1000);



}
