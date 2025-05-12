#include <stdio.h>

int main() {

    int energia[10], i, maior=000, menor=9999, total=0, n=0;

    for(i=0; i<10; i++) {
        printf("Informe a energia do %do dia em kWh: ", i+1);
        scanf("%d", &energia[i]);

        total += energia[i];

        if(energia[i]>300){
            n++;
        }

        if(energia[i]>maior){
            maior = energia[i];
        }

        if(energia[i]<menor){
            menor = energia[i];
        }
    }

    printf("\nO total de consumo do período foi de %d kWh\n", total);
    printf("O maior consumo foi de %d kWh\n", maior);
    printf("O menor consumo foi de %d kWh\n", menor);
    printf("Em %d dias o consumo foi acima de 300 kWh\n", n);
}