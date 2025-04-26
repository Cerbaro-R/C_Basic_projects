#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int v, c = 1000;

    v = (rand() % 100) + 1;

    while(c != v){
        printf("Digite um valor: ");
        scanf("%d", &c);
        if(c<v){
            printf("O valor digitado é menor que o sorteado, tente novamente\n");
        }else if(c>v){
            printf("O valor digitado é maior que o sorteado, tente novamente\n");
        }else{
            printf("Parabens, voce acertou!");
        }
    }
}