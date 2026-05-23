/*Crie um programa que melhore o procedimento Gerador() da questão anterior para
que mostre uma mensagem personalizada, passada como parâmetro. Ex: Ao chamar
Gerador("Aprendendo Portugol") aparece: +-------=======------+ Aprendendo Portugol +-
------=======------+*/

#include <stdio.h>

void Gerador(char mensagem[]){
    printf("+-------=======------+\n");
    printf(" %s \n", mensagem);
    printf("+-------=======------+\n");
}

int main(){

    Gerador("Aprendendo Portugol");

    return 0;
}