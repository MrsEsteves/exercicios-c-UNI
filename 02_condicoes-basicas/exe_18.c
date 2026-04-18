/*Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade dela
e depois mostre se ela pode ou não votar.  */

#include <stdio.h>

int main() {
    int ano_nasc;
    int ano_atual = 2026;

    printf("Em que ano você nasceu? ");
    scanf("%d", &ano_nasc);

    printf("Idade: %d anos.", ano_atual - ano_nasc);
    if ( (ano_atual - ano_nasc) >= 18) {
        printf("Você já pode votar!");
    }
    else {
        printf("Você ainda não tem idade para votar.");
    }

    return 0;
}
