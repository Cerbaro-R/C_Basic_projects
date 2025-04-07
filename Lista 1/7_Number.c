#include <stdio.h>
int main() {
    int n, d, t, r;

    printf("Digite um numero: ");
    scanf("%d", &n);

    d = n * 2;
    t = n * 3;
    r = n * n;

    printf("O dobro de %d e %d\nO triplo de %d e %d\nA raiz quadrada de %d e %d\n", n, d, n, t, n, r);
}