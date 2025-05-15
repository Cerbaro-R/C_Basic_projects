#include <stdio.h>

int main(){

    float p[12], m = 0;
    int i;

    for(i = 0; i < 12; i++){
        printf("Informe o preco do produto %d: ", i + 1);
        scanf("%f", &p[i]);
        m += p[i];
    }

    for(i = 0; i < 12; i++){
        printf("O valor do produto %d e de R$%.2f\n", i + 1, p[i]);
    }

    for(i = 0; i < 12; i++){
        if(p[i] > 100.0){
            printf("O produto de numero %d custa mais que R$100,00\n", i + 1);
        }
    }

    printf("\nO preço medio dos produtos e de R$%.2f\n", m / 12.0);

}
