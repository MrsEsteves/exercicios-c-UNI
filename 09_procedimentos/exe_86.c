/*Crie um programa que tenha um procedimento Gerador() que, quando chamado,
mostre a mensagem "Olá, Mundo!" com algum componente visual (linhas) Ex: Ao chamar
Gerador() aparece: +-------=======------+ Olá, Mundo! +-------=======------+*/

#include <stdio.h>

void Gerador(){
    printf("+-------=======------+\n");
    printf("      Ola, Mundo!      \n");
    printf("+-------=======------+");
}

int main(){
    Gerador();

    return 0;
}