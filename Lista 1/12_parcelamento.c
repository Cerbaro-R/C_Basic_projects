#include <stdio.h>

int main() {
    int p;
    float vt, vp;

    printf("Digite o valor total da compra: ");
    scanf("%f", &vt);

    printf("Digite em quantas vezes voce deseja parcelar: ");
    scanf("%d", &p);

    vp = vt/p;

    printf("Parcelando em %d vezes o valor de cada parcela fica em R$%.2f", p, vp);

}