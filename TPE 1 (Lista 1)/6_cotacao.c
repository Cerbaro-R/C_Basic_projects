#include <stdio.h>

int main() {
    float r, c, d;

    printf("Digite a cotacao dolar hoje: ");
    scanf("%f", &c);
    printf("Digite quantos reais voce deseja converter: ");
    scanf("%f", &r);

    d = r / c;

    printf("Seus reais valem %.2f dolares\n", d);

    return 0;
}