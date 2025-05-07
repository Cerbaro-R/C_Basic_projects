#include <stdio.h>

int main()
{

    float s, mf, f;

    printf("Digite o seu salario: ");
    scanf("%f", &s);

    printf("Digite o valor que voce deseja financiar: ");
    scanf("%f", &f);

    mf = s * 5;

    if (f <= mf)
    {
        printf("Financiamento concedido\n");
    }
    else
    {
        printf("Financiamento negado\n");
    }

    printf("Obrigado por nos consultar");
}
