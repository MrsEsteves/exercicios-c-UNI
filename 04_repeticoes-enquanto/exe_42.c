/*Faça um algoritmo que pergunte ao usuário um número inteiro e positivo qualquer e
mostre uma contagem até esse valor: Ex: Digite um valor: 35 Contagem: 1 2 3 4 5 6 7 ...
33 34 35 Acabou! */

#include <stdio.h>

int main(){
    int x, a = 1;

    printf("Digite um valor: ");
    scanf("%d", &x);

    while (a <= x){
        printf("%d ", a);
        a++;
    }
    printf("Acabou!");
    

    return 0;

}