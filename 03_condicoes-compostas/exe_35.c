/*Uma empresa de aluguel de carros precisa cobrar pelos seus serviços. O aluguel de
um carro custa R$90 por dia para carro popular e R$150 por dia para carro de luxo. Além
disso, o cliente paga por Km percorrido. Faça um programa que leia o tipo de carro
alugado (popular ou luxo), quantos dias de aluguel e quantos Km foram percorridos. No
final mostre o preço a ser pago de acordo com a tabela a seguir: - Carros populares
(aluguel de R$90 por dia) - Até 100Km percorridos: R$0,20 por Km - Acima de 100Km
percorridos: R$0,10 por Km - Carros de luxo (aluguel de R$150 por dia) - Até 200Km
percorridos: R$0,30 por Km - Acima de 200Km percorridos: R$0,25 por Km*/

#include <stdio.h>

int main(){

    int dias, carro;
    float km;

    printf("Tipo de carro (popular(1) ou luxo(2)): ");
    scanf("%d", &carro);

    printf("Quantos dias de aluguer: ");
    scanf("%d", &dias);

    printf("Kilometros percorridos: ");
    scanf("%f", &km);

    if (carro == 1){
        if (km <= 100){
            printf("Total a pagar: R$%.2f", (km * 0.20) + (90 * dias));
        }
        else if (km > 100){
            printf("Total a pagar: R$%.2f", (km * 0.10) + (90 * dias));
        }
    }

    else if (carro == 2){
        if (km <= 200){
            printf("Total a pagar: R$%.2f", (km * 0.30) + (150 * dias));
        }
        else if (km > 200){
            printf("Total a pagar: R$%.2f", (km * 0.25) + (150 * dias));
        }
    }

    else{
        printf("Opção de carro inválida");
    }

    
    return 0; 
}