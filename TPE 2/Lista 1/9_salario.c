#include <stdio.h>

int main() {
    
    float salario[10], t;
    int maior=0, menor=0;

    for(int i=0; i<10; i++) {
        printf("Informe o salario do %do funcionario: ", i+1);
        scanf("%f", &salario[i]);

        if(salario[i]>10000) {
            maior++;
        }else if(salario[i]<1500) {
            menor++;
        }
        t += salario[i];
    }

    printf("\nO total de salarios foi de %.2f\n", t);
    printf("%d salarios sao mauiores que 10000\n", maior);
    printf("%d salarios sao menores que 1500\n", menor);
}