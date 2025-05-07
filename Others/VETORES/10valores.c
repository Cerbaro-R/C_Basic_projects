#include <stdio.h>

int main(){

    int n[10], i, maior=0, menor=99999999999999;

    for (i = 0; i < 10; i++)
    {
        printf("informe um valor: ");
        scanf("%d", &n[i]);
        if(n[i]>maior){
            maior = n[i];
        }if(n[i]<menor){
            menor = n[i];
        }
    }
    printf("O maior valor e: %d \n", maior);
    printf("O menor valor e: %d \n", menor);
    printf("Todos os valores sao: \n");
    for(i = 0; i<10; i++){
        printf("%d   ", n[i]);
    }
}