/*Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura “para”. No
final, mostre na tela: a) Quantas mulheres foram cadastradas b) Quantos homens pesam
mais de 100Kg c) A média de peso entre as mulheres d) O maior peso entre os homens */

#include <stdio.h>
#include <ctype.h>

int main(){
    char sexo;
    float peso, p_m = 0, media_m, maior_p_h = 0;
    int q_m = 0, h_100 = 0, i;

    for (i = 1; i <= 8; i++){
        printf("\n%d - Genero [F/M]: ", i);
        scanf(" %c", &sexo);

        printf("%d - peso: ", i);
        scanf("%f", &peso);

        if(toupper(sexo) == 'F'){
            q_m++;
            p_m+=peso;
        }

        if(toupper(sexo) == 'M'){
            if(peso > 100){
                h_100++;
            }

            if(peso > maior_p_h){
                maior_p_h=peso;
            }
        }
    }

    if(q_m > 0){
        media_m = p_m / q_m;
    } else {
        media_m = 0;
    }

    printf("\nQuantidade de mulheres que foram cadastradas: %d", q_m);
    printf("\nHomens que pesam mais de 100kg: %d", h_100);
    printf("\nMedia de peso entre as mulheres: %.2f", media_m);
    printf("\nMaior peso entre os homens: %.2f", maior_p_h);

    return 0;
}