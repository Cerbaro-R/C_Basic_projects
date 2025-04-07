#include <stdio.h>

int main()
{
    float n;
    
    printf("digite um número");
    scanf("%f", &n);
    
    if(n < 0){
        printf("Número negativo");
    }if(n==0){
        printf("Número 0");
    }if(n>0){
        printf("Número prositivo");
    }
}