#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Digite o número de gols do time A: ");
    scanf("%d", &a);
    printf("Digite o número de gols do time B: ");
    scanf("%d", &b);
    
    if(a>b){
        printf("O time A é o ganhador");
    }    if(a<b){
        printf("O time b é o ganhador");
    }    if(a==b){
        printf("Empate");
    }
    
    
}