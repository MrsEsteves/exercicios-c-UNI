/*Crie um programa que leia o sexo e a idade de várias pessoas. O programa vai
perguntar se o usuário quer continuar ou não a cada pessoa. No final, mostre: a) qual é a
maior idade lida b) quantos homens foram cadastrados c) qual é a idade da mulher mais
jovem d) qual é a média de idade entre os homens*/

#include <stdio.h>

int main(){
    char sexo, resp;
    int f = 1, idade, maior_idade = 0, homens = 0, mulher_mais_jovem = -1;
    float media = 0;

    while(f){
        printf("\nSexo (F ou M): ");
        scanf(" %c", &sexo);

        printf("Idade: ");
        scanf("%d", &idade);

        if(idade > maior_idade){
            maior_idade = idade;
        }

        if(toupper(sexo) == 'M'){
            homens++;
            media+=idade;
        }

        if(toupper(sexo) == 'F'){
            if(mulher_mais_jovem == -1 || idade < mulher_mais_jovem){
                mulher_mais_jovem = idade;
            }
        }

        do {
            printf("\nQuer continuar? (S ou N): ");
            scanf(" %c", &resp);
        }
        while(toupper(resp) != 'S' && toupper(resp) != 'N');

        if(toupper(resp) == 'N'){
            f = 0;
        }

    }
    printf("\nMaior idade lida: %d", maior_idade);
    printf("\nHomens cadastrados: %d", homens);

    if(mulher_mais_jovem == -1){
        printf("\nNnehuma mulher cadastrada");
    }
    else{
        printf("\nIdade da mulher mais jovem: %d", mulher_mais_jovem);
    }
    
    if(homens > 0){
        printf("\nMédia de idade entre os homens: %.2f", media/homens);
    }
    else{
        printf("\nNenhum homem cadastrado");
    }
    

    return 0;
}