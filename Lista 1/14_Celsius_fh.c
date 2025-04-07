#include <stdio.h>

int main() {

    float c, f;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    f= c*1.8+32;

    printf("A temperatura em FH e de %.0f", f);
}