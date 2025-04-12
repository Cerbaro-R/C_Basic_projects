#include <stdio.h>

int main() {

    int p1, p2, p3, p4, p5, e, q;
    int v = 0;      
    char a = 's';   
    char s = 's';

    p1 = 12;
    p2 = 14;
    p3 = 17;
    p4 = 9;
    p5 = 11;

    printf("Ola! Este é o nosso cardapio:\n\n");
    printf("1 - X-Salada.......R$12,00\n");
    printf("2 - X-Bacon........R$14,00\n");
    printf("3 - X-Tudo.........R$17,00\n");
    printf("4 - Refrigerante...R$9,00\n");
    printf("5 - Suco...........R$11,00\n");

    while (a == 's' || a == 'S') {

        printf("\nDigite o numero de sua escolha: ");
        scanf("%d", &e);

        if (e < 1 || e > 5) {
            printf("Opção invalida.\n");
            continue;
        }

        printf("Digite a quantidade: ");
        scanf("%d", &q);

        if (e == 1)
            v = v + p1 * q;
        else if (e == 2)
            v = v + p2 * q;
        else if (e == 3)
            v = v + p3 * q;
        else if (e == 4)
            v = v + p4 * q;
        else if (e == 5)
            v = v + p5 * q;

        printf("Deseja adicionar mais algum item?\nS - Sim\nN - Nao\n");
        scanf(" %c", &a); 
    }

    printf("\nDeseja pagar a taxa de servico?\nS - Sim\nN - Nao\n");
    scanf(" %c", &s);

    if (s == 's' || s == 'S'){
        v = v + v * 0.1;
    }

    printf("\nO valor a ser pago e de R$%d,00\n", v);

}
