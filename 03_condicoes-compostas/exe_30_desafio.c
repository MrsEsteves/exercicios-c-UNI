/*[DESAFIO] Refaça o algoritmo 25, acrescentando o recurso de mostrar que tipo de
triângulo será formado: - EQUILÁTERO: todos os lados iguais - ISÓSCELES: dois lados iguais
- ESCALENO: todos os lados diferentes*/

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        printf("Os lados formam um triângulo ");
        if (a == b && b == c){
            printf("EQUILÁTERO");
        }
        else if (a == b || b == c || c == a){
            printf("ISÓSCELES");
        }
        else{
            printf("ESCALENO");
        }
    }
    else {
        printf("Os lados NÃO formam um triângulo.");
    }

    return 0;
}