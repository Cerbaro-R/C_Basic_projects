#include <stdio.h>

int main()
{
    float valor_produto = 2.0, total = 0.0;
    int quantidade;

    printf("Total inicial: R$ %.2f\n", total);

    while (valor_produto != 0)
    {
        printf("Informe o valor do seu produto: ");
        scanf("%f", &valor_produto);

        if (valor_produto < 0)
        {
            printf("Valor incorreto!\n");
        }
        else if (valor_produto == 0)
        {
            printf("Compra finalizada.\n");
        }
        else
        {
            printf("Informe a quantidade: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0)
            {
                printf("Quantia invalida!\n");
            }
            else
            {
                total += quantidade * valor_produto;
                printf("Valor total ate o momento: R$ %.2f\n", total);
            }
        }
    }

    printf("Total final da compra: R$ %.2f\n", total);
    return 0;
}