#include <stdio.h>

int main() {

    int v, d, e, p;
    char name[50];

    printf("Digite o nome do time: ");
    scanf("%s", name);

    printf("Digite o numero de vitorias deste time: ");
    scanf("%d", &v);
    printf("Digite o numero de empates deste time: ");
    scanf("%d", &e);
    printf("Digite o numero de derrotas deste time: ");
    scanf("%d", &d);

    p = (v*3) + (e);

    printf("O time %s fez %d pontos", name, p);
}