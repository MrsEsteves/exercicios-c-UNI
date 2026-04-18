// Crie um aplicativo que mostre na tela a seguinte contagem: 0 3 6 9 12 15 18 Acabou! 

#include <stdio.h>

int main(){
    int x = 0;
    while (x <= 18){
        printf("%d ", x);
        x+=3;
    }
    printf("Acabou!");

    return 0;
}