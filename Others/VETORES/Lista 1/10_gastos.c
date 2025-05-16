#include <stdio.h>

int main(){
    float gasto[10], total=0, media=0, maior=0;
    int i;

    for(i=0; i<10; i++){
        printf("Informe o valor gasto no %do dia: ", i+1);
        scanf("%f", &gasto[i]);
        total += gasto[i];

        if(gasto[i]>maior){
            maior = gasto[i];
        }
    }

    media = total/10;

    printf("\nNo total foram gastos R$%.2f\n\n", total);
    printf("A media de gastos foi de R$%.2f\n", media);
    printf("O maior gasto foi de R$%.2f\n", maior);
}