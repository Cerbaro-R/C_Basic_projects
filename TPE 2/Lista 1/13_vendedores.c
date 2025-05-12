#include <stdio.h>

int main(){

    int vendas[10], maior=0, media=0, i, q=0;

    for(i=0; i<10; i++){
        printf("Informe a quantidade de vendas do %do vendedor: ", i+1);
        scanf("%d", &vendas[i]);

        if(vendas[i]>50){
            maior++;
        }

        if(vendas[i]<20){
            q++;
            media+=vendas[i];
        }
    }

    media = media/q;

    printf("\n%d vendedores tiveram mais de 50 vendas\n", maior);
    printf("A media de vendas dos vendedores com menos de 20 vendas foi de %d\n", media);
}