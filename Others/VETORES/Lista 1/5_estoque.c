#include <stdio.h>

int main(){

    int q[8], i, t=0;

    for(i=0; i<8; i++){
        printf("Informe a quantidade de produtos do %do item: ", i+1);
        scanf("%d", &q[i]);

        t += q[i];
    }

    for(i=0; i<8; i++){
        if (q[i]<6){
            printf("O estoque do %do item esta abaixo do minimo\n", i+1);
        }
    }

    printf("O estoque total e de %d itens\n", t);
}