//[DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int jogador, pc;
    srand(time(NULL));
    pc = rand() % 3 + 1;

    printf("Escolha: Pedra(1), Papel(2) ou Tesoura(3)? \n");
    scanf("%d", &jogador);

    if (pc == 1){
        printf("Computador escolheu: Pedra\n");
    }
    else if(pc == 2){
        printf("Computador escolheu: Papel\n");
    }
    else{
        printf("Computador escolheu: Tesoura\n");
    }
    

    if (jogador == pc) {
        printf("EMPATE!\n");
    }
    else if ((jogador == 1 && pc == 3) || (jogador == 2 && pc == 1) || (jogador == 3 && pc == 2)){ 
        printf("VOCÊ VENCEU!\n");
    }
    else {
        printf("COMPUTADOR VENCEU!\n");
    }
    

    return 0;
}