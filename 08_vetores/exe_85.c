/*Faça um algoritmo que leia o nome, o sexo e o salário de 5 funcionários e guarde
esses dados em três vetores. No final, mostre uma listagem contendo apenas os dados
das funcionárias mulheres que ganham mais de R$5 mil*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char nome[5][50], sexo[5];
    float salario[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("%d Nome: ", i +1);
        scanf("%s", nome[i]);

        do{
            printf("%d Sexo(F/M): ", i + 1);
            scanf(" %c", &sexo[i]);

        } while(toupper(sexo[i]) != 'F' && toupper(sexo[i]) != 'M');

        printf("%d Salario: ", i + 1);
        scanf("%f", &salario[i]);
    }

    printf("\n---Dados de mulheres que ganham mais de R$5mil");
    for(i = 0; i < 5; i++){
        if(toupper(sexo[i]) == 'F'){
            if(salario[i] > 5000.0){
                printf("Nome: %s, Sexo: %c, Salario: %.2f\n", nome[i], sexo[i], salario[i]);
            }
        }
    }

    return 0;
}