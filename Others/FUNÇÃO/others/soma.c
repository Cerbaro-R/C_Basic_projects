#include <stdio.h>

void recebeValores(int *a, int *b){
    printf("Digite o primeiro valor a ser somado: ");
    scanf("%d", a);
    printf("Digite o segundo valor a ser somado: ");
    scanf("%d", b);
}

void soma(int *a, int *b, int *s){
    *s = *a + *b; 
}

void imprimeSoma(int *s){
    printf("o resultado da soma e: %d", *s);
}

int main(){
    int a, b, s;
    
    recebeValores(&a, &b);
    soma(&a, &b, &s);
    imprimeSoma(&s);
}