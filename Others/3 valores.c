#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Digite o valor 1: ");
    scanf("%d", &a);
    printf("Digite o valor 2: ");
    scanf("%d", &b);
    printf("Digite o valor 3: ");
    scanf("%d", &c);
    
    if((a>b) && (a>c)){
        printf("o valor 1 é o maior valor: %d", a);
    }if((a<b) && (b>c)){
        printf("o valor 2 é o maior valor: %d", b);
    }if((c>b) && (a<c)){
        printf("o valor 3 é o maior valor: %d", c);
    }
}