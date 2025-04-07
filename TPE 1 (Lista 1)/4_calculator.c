#include <stdio.h>

int main(){

    float a, b, soma, sub, mult, div;

    printf("Digite o primeito valor: ");
    scanf("%f", &a);
    printf("Digite o segundo valor: ");
    scanf("%f", &b);

    soma = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;

    printf("O valor da soma e %f \n O valor da subtracao e %f \n O valor da multiplicacao e %f \n E o valor da divisao e %f", soma, sub, mult, div);

}