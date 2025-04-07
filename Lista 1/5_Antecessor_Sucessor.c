#include <stdio.h>

int main(){

int n, a, s;

printf("Digite um numero: ");
scanf("%d", &n);

a = n - 1;
s = n + 1;

printf("O Sucessor de %d e %d\nE o Antecessor de %d e %d", n, s, n, a);
}