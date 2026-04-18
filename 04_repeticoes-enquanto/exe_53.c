/*Faça um programa que leia a idade e o sexo de 5 pessoas, mostrando no final: a)
Quantos homens foram cadastrados b) Quantas mulheres foram cadastradas c) A média
de idade do grupo d) A média de idade dos homens e) Quantas mulheres tem mais de 20
anos*/

#include <stdio.h>

int main(){
    int idade, i = 1, homens = 0, mulheres = 0, mulheres_20_acima = 0, media = 0 ,media_homens = 0;
    char sexo;

    while(i <= 5){
        printf("%dª Sexo(F ou M): ", i);
        scanf(" %c", &sexo);

        printf("%dª Idade: ", i);
        scanf("%d", &idade);

        media+=idade;
        i++;

        if(sexo == 'F' || sexo == 'f'){
            mulheres++;

            if(idade > 20){
                mulheres_20_acima++;
            }
        }

        if(sexo == 'M' || sexo == 'm'){
            homens++;
            media_homens+=idade;
        }


    }
    printf("Homens cadastrados: %d \nMulheres cadastradas: %d \nMedia de idade do grupo: %.2f", homens, mulheres, (float)media/5);

    if (homens > 0) {
        printf("\nMedia de idade dos homens: %.2f \n", (float)media_homens / homens);
    } else {
        printf("\nMedia de idade dos homens: 0.00 (Nenhum homem cadastrado)\n");
    }
    printf("Mulheres acima dos 20: %d", mulheres_20_acima);

    return 0;
}