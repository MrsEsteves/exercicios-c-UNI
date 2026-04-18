/* Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua
situação em relação ao alistamento militar. - Se estiver antes dos 18 anos, mostre em
quantos anos faltam para o alistamento. - Se já tiver depois dos 18 anos, mostre quantos
anos já se passaram do alistamento. */

#include <stdio.h>

int main() {
    int ano_nasc;
    int ano_atual = 2026;

    printf("Ano de nascimento: ");
    scanf("%d", &ano_nasc);

    if ((ano_atual - ano_nasc) < 18) {
        printf("Faltam %d ano(s) para o seu alistamento.", 18 - (ano_atual - ano_nasc));
    }
    else if ((ano_atual - ano_nasc) > 18) {
        printf("Já se passaram %d ano(s) do seu alistamento.", (ano_atual - ano_nasc) - 18);
    }
    else {
        printf("Você deve se alistar este ano.");
    }

    return 0;

}
