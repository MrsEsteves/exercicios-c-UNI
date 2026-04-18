/*O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no peso
de uma pessoa. De acordo com o valor do IMC, podemos classificar o indivíduo dentro
de certas faixas. - abaixo de 18.5: Abaixo do peso - entre 18.5 e 25: Peso ideal - entre 25
e 30: Sobrepeso - entre 30 e 40: Obesidade - acima de 40: Obseidade mórbida Obs: O
IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado da altura)*/

#include <stdio.h>

int main(){

    float altura, peso;

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    if (peso / (altura*altura) < 18.5){
        printf("Abaixo do peso");
    }
    else if (peso / (altura * altura) < 25){
        printf("Peso ideal");
    }
    else if (peso / (altura * altura) < 30){
        printf("Sobrepeso");
    }
    else if (peso / (altura * altura) < 40){
        printf("Obesidade");
    }
    else {
        printf("Obesidade mórbida");
    }

    return 0;
}