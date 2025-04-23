#include <stdio.h>

int main() {
    int s = 0, v = 0;

    while(v>=0){
        printf("Digite um valor: ");
        scanf("%d", &v);
        s = s + v;
    }

    printf("Soma: %d", s);
}