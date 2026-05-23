/*Melhore o exercício 96, criando além da função Media() uma outra função chamada
Situacao(), que vai retornar para o programa principal se o aluno está APROVADO, em
RECUPERAÇÃO ou REPROVADO. Essa nova função, vai receber como parâmetro o
resultado retornado pela função Media().*/

#include <stdio.h>

float Media(float nota1, float nota2){
    float resultado;
    resultado = (nota1 + nota2)/2;

    return resultado;
}

char Situacao(float mediaAluno){
    if(mediaAluno >= 7.0) return 'A';
    else if(mediaAluno >= 5.0) return 'R';
    else return 'E';
}


int main(){
    float n1, n2, total;
    char status;

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    total = Media(n1, n2);
    printf("Media das notas: %.2f", total);

    status = Situacao(total);
    if (status == 'A') {
        printf("Situacao do aluno: APROVADO\n");
    } else if (status == 'R') {
        printf("Situacao do aluno: EM RECUPERACAO\n");
    } else {
        printf("Situacao do aluno: REPROVADO\n");
    }

    return 0;
}