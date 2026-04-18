/*[DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta. Analise
seus comprimentos e diga se é possível formar um triângulo com essas retas.
Matematicamente, para três segmentos formarem um triângulo, o comprimento de cada
lado deve ser menor que a soma dos outros dois.  */

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("Os lados formam um triângulo.");
    }
    else {
        printf("Os lados NÃO formam um triângulo.");
    }

    return 0;
}
