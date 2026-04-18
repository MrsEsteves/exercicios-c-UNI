/*Desenvolva um programa que faça o sorteio de 20 números entre 0 e 10 e mostre na
tela: a) Quais foram os números sorteados b) Quantos números estão acima de 5 c)
Quantos números são divisíveis por 3*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int c = 1, num, acima5 = 0, div3 = 0;
    srand(time(NULL));
    printf("Numeros sorteados: ");
    while(c <= 20){
        num = rand() % 11;
        printf("%d ", num);
        
        if (num > 5){
            acima5++;
        }
        
        if (num % 3 == 0 && num != 0){
            div3++;
        }

        c++;
    }
    printf("\nNumeros acima de 5: %d \nNumeros divisivel por 3: %d", acima5, div3);


    return 0;
}