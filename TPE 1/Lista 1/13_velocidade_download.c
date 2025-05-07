#include <stdio.h>

int main(){

    float q, v, t;

    printf("Digite o tamanho do arquivo em MB: ");
    scanf("%f", &q);

    printf("Digite a velocidade da sua internet em Mbps: ");
    scanf("%f", &v);

    v = v/8;

    t = q/v;

    printf("O tempo estimado de download do seu arquivo sera de %.0f segundos", t);
}