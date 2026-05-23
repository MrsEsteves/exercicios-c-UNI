/*Crie um programa que melhore o procedimento Gerador() da questão anterior para
que o programador possa escolher uma entre três bordas: +-------=======------+ Borda 1
~~~~~~~~:::::::~~~~~~~ Borda 2 <<<<<<<<------->>>>>>> Borda 3 Ex: Uma chamada válida
seria Gerador("Portugol Studio", 3, 2) ~~~~~~~~:::::::~~~~~~~ Portugol Studio Portugol
Studio Portugol Studio ~~~~~~~~:::::::~~~~~~~ */

#include <stdio.h>

void Gerador(char mensagem[], int vezes, int bordas){
    int i;

    switch(bordas){
        case 1: printf("+-------=======------+\n"); break;
        case 2: printf("~~~~~~~~:::::::~~~~~~~\n"); break;
        case 3: printf("<<<<<<<<------->>>>>>>\n"); break;
    }

    for(i = 0; i < vezes; i++){
        printf("%s\n", mensagem);
    }

    switch(bordas){
        case 1: printf("+-------=======------+\n"); break;
        case 2: printf("~~~~~~~~:::::::~~~~~~~\n"); break;
        case 3: printf("<<<<<<<<------->>>>>>>\n"); break;
    }
}

int main(){

    Gerador("Portugol Studio", 3, 3);

    return 0;
}