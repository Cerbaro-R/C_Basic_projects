#include <stdio.h>

void solicitaNumero(int *n){
    printf("Digite um numero: ");
    scanf("%d", n);
}

void imprimeDobro(int n){
    n += n;
    printf("O dobro e: %d\n", n);
}

int main(){
    int n;
    solicitaNumero(&n);
    imprimeDobro(n);
}