#include <stdio.h>

int main(){

    int an, mn, dn, aa, ma, da;

    printf("Informe o ano de nascimento:");
    scanf("%d", &an);
    printf("Informe o mes de nascimento:");
    scanf("%d", &mn);
    printf("Informe o dia de nascimento:");
    scanf("%d", &dn);

    printf("Informe o ano atual:");
    scanf("%d", &aa);
    printf("Informe o mes atual:");
    scanf("%d", &ma);
    printf("Informe o dia atual:");
    scanf("%d", &da);

    printf("Sua idade em dias eh: %d", (aa - an) * 365 + (ma - mn) * 30 + (da - dn));

}