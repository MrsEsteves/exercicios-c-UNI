/*Faça um aplicativo que leia o preço de 8 produtos. No final, mostre na tela qual foi o
maior e qual foi o menor preço digitados.*/

#include <stdio.h>

int main(){
    float preco, maior, menor;
    int i = 1;
    while (i <= 8){
        printf("Preço do %dº produto:  ", i);
        scanf("%f", &preco);

        if (i == 1){
            maior = preco;
            menor = preco;
        }
        else {
            if (preco > maior) {
                maior = preco;
            }

            if (preco < menor){
                menor = preco;
            }
        }

        i++;
    }

    printf("Maior preço digitado: %.2f \nMenor preço digitado: %.2f", maior, menor);


    return 0;
}