#include <stdio.h>

int main(){

    float doacao[25], maior=0, t=0;

    int i, q=0;

    for(i=0; i<25; i++){
        printf("Informe o valor da %da doacao: ", i+1);
        scanf("%f", &doacao[i]);

        t += doacao[i];
        if(doacao[i]>maior){
            maior = doacao[i];
        }

        if(doacao[i]>100){
            q++;
        }
    }

    printf("\nO total de doacoes foi de %.2f\n", t);
    printf("Foram feitas %d doacoes acima de R$100,00\n", q);
    printf("A maior doacao foi de %.2f\n", maior);
    
}