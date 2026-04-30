/*Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários. No final,
mostre o total de salários pagos aos homens e o total pago às mulheres. O programa vai
perguntar ao usuário se ele quer continuar ou não sempre que ler os dados de um
funcionário.*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char sexo, resp;
    float salario, total_mulher = 0, total_homem = 0;
    int f = 1;

    while(f){
        printf("\nGenero(F ou M): ");
        scanf(" %c", &sexo);

        printf("Salario: ");
        scanf("%f", &salario);

        if(toupper(sexo) == 'F'){
            total_mulher+=salario;
        }
        else if(toupper(sexo) == 'M'){
            total_homem+=salario;
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
    printf("\nTotal pago aos homens: %.2f \nTotal pago as mulheres: %.2f", total_homem, total_mulher);

    return 0;
}