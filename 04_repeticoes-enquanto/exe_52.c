/*Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final: a) Qual é a
média de idade do grupo b) Quantas pessoas tem mais de 18 anos c) Quantas pessoas
tem menos de 5 anos d) Qual foi a maior idade lida*/


#include <stdio.h>

int main(){
    int idade, contador = 1, maior_18 = 0, menor_5 = 0, maior = 0;
    float media = 0;

    while(contador <= 10){
        printf("%dª idade: ", contador);
        scanf("%d", &idade);
        contador++;
        media+=idade;

        if(idade >= 18){
            maior_18++;
        }

        if(idade < 5){
            menor_5++;
        }

        if(idade > maior){
            maior = idade;
        }
    }
    printf("Média do grupo: %.2f \nPessoas maiores de 18: %d \nPessoas menores de 5: %d \nMaior idade lida: %d", media/10, maior_18, menor_5, maior);


    return 0;
}