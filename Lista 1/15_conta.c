#include <stdio.h>

int main(){

    int p;
    float vt, vp;

    printf("Digite o valor total da conta: ");
    scanf("%f", &vt);

    printf("Digite em quantas pessoas a conta sera dividida: ");
    scanf("%d", &p);

    vp = (vt*1.1)/p;

    printf("O valor que cada pessoa devera pagar com a taxa de servico sera de R$%.2f", vp);
}