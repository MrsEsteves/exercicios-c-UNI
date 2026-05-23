/*Crie um programa que melhore o procedimento Gerador() da questão anterior para
que mostre uma mensagem vário Ex: Ao chamar Gerador("Aprendendo Portugol", 4)
aparece: +-------=======------+ Aprendendo Portugol Aprendendo Portugol Aprendendo
Portugol Aprendendo Portugol +-------=======------+ */

#include <stdio.h>

void Gerador(char mensagem[], int vezes){
    int i;
    printf("+-------=======------+\n");

    for(i = 0; i < vezes; i++){
        printf("%s\n", mensagem);
    }
    printf("+-------=======------+\n");
}

int main(){

    Gerador("Aprendendo Portugol", 4);

    return 0;
} 