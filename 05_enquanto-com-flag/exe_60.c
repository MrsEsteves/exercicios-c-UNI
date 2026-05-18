/* Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas. O programa vai perguntar se o usuário quer ou não continuar. No final, mostre: a) O nome da pessoa mais velha b) O nome da mulher mais jovem c) A média de idade do grupo d) Quantos homens tem mais de 30 anos e) Quantas mulheres tem menos de 18 anos */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[100], sexo, resp, pessoa_mais_velha[100], mulher_mais_jovem[100];
    int idade, pessoas = 0, m_mais_jovem = 1000, idades = 0;
    int f = 1, homens_mais30 = 0, mulher_menos_18 = 0, p_mais_velha = 0, mulher_mais_velha = 0;
    float media;

    while(f){
        printf("\nNome: ");
        scanf(" %99[^\n]", nome);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Sexo: ");
        scanf(" %c", &sexo);

        pessoas += 1;
        idades += idade;

        if(idade > p_mais_velha){
            p_mais_velha = idade;
            strcpy(pessoa_mais_velha, nome);
        }

        if(toupper(sexo) == 'F'){
            if(idade < 18){
                mulher_menos_18+=1;
            }

            if(idade < m_mais_jovem){
                m_mais_jovem = idade;
                strcpy(mulher_mais_jovem, nome);
            }
        }

        if(toupper(sexo) == 'M'){
            if(idade > 30){
                homens_mais30+=1;
            }
        }

        do {
            printf("Deseja continuar: ");
            scanf(" %c", &resp);
        }
        while(toupper(resp) != 'S' && toupper(resp) != 'N');
        if(toupper(resp) == 'N'){
            f = 0;
        }
    }
    if(pessoas > 0){
        media = (float)idades / pessoas;
    }else{
        media = 0;
    }

    printf("\nO nome da pessoa mais velha: %s", pessoa_mais_velha);

    if(m_mais_jovem != 1000){
        printf("\nO nome da mulher mais jovem: %s", mulher_mais_jovem);
    }else{
        printf("\n Nenhuma mulher cadastrada");
    }
    
    printf("\nA media de idade do grupo: %.2f", media);
    printf("\nHomens que tem mais de 30 anos: %d", homens_mais30);
    printf("\nMulheres que tem menos de 18 anos: %d", mulher_menos_18);
    
    return 0;
}