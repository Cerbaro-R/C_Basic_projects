#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int jogar_novamente = 1, v, c;

    while(jogar_novamente == 1){

        c = 0;
        
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

    printf("Deseja jogar novamente? 1 - Sim | 0 - Nao\n");
    scanf("%d", &jogar_novamente);
    if(jogar_novamente == 1){
    }
    }
}