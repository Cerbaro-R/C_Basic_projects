#include <stdio.h>

int main()
{
    int nsc, ingrs, id, idd, tp;
    
    printf("Digite o seu ID de funcionário: ");
    scanf("%d", &id);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &nsc);
    printf("Digite o ano do seu ingresso no mercado de trabalho: ");
    scanf("%d", &ingrs);
    
    idd = 2025-nsc;
    tp = 2025-ingrs;
    
    if((nsc<1960) || (ingrs<1995) || ((nsc<1965) && (ingrs<2000))){
        printf("Parabéns funcionário %d você tem %d anos de idade, %d anos de serviço e pode se aposentar", id, idd, tp);
    }else{
        printf("Você não pode se aposentar");
    }
    
}