/*Crie um algoritmo que leia o valor inicial da contagem, o valor final e o incremento,
mostrando em seguida todos os valores no intervalo: Ex: Digite o primeiro Valor: 3 Digite
o último Valor: 10 Digite o incremento: 2 Contagem: 3 5 7 9 Acabou!*/

#include <stdio.h>

int main(){
    int a, z, incre;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o ultimo valor: ");
    scanf("%d", &z);

    printf("Digite o incremento: ");
    scanf("%d", &incre);

    if (a <= z){
        while (a <= z){
        printf("%d ", a);
        a+=incre;
        }
    }
    
    else{
        while (a >= z){
        printf("%d ", a);
        a-=incre;
        }
    }

    return 0;
}