#include <stdio.h>

void lerGastos(float *gastos, int n) {
    for (int i = 0; i < n; i++) {
        printf("Informe o valor gasto no %do dia: ", i + 1);
        scanf("%f", &gastos[i]);
    }
}

void calcularTotal(float *gastos, int n, float *total) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += gastos[i];
    }
    *total = soma;
}

void calcularMedia(float total, int n, float *media) {
    *media = total / n;
}

void encontrarMaiorGasto(float *gastos, int n, float *maior) {
    *maior = gastos[0];
    for (int i = 1; i < n; i++) {
        if (gastos[i] > *maior) {
            *maior = gastos[i];
        }
    }
}

void imprimirResultados(float total, float media, float maior) {
    printf("\nNo total foram gastos R$%.2f\n", total);
    printf("A media de gastos foi de R$%.2f\n", media);
    printf("O maior gasto foi de R$%.2f\n", maior);
}

int main() {
    const int n = 10;
    float gastos[n];
    float total, media, maior;

    lerGastos(gastos, n);
    calcularTotal(gastos, n, &total);
    calcularMedia(total, n, &media);
    encontrarMaiorGasto(gastos, n, &maior);
    imprimirResultados(total, media, maior);

    return 0;
}