#include <stdio.h>

int main(){

    int n, i, s=0;

    for(i = 0; i<10; i++){
        printf("Informe um valor: ");
        scanf("%d", &n);
        s = s + n;
    }

    printf("%d", s);
}