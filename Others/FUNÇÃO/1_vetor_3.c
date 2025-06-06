#include <stdio.h>

void lerSaldo(int *saldo, int n) {
    for (int i = 0; i < n; i++) {
        printf("Informe o saldo da conta %d: ", i + 1);
        scanf("%d", &saldo[i]);
    }
}

void calcularMedia(int *saldo, int n, float *media) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += saldo[i];
    }
    *media = (float) soma / n;
}

void imprimirResultados(int *saldo, int n, float media) {
    printf("\nSaldo das contas:\n");
    for (int i = 0; i < n; i++) {
        printf("Conta %d: %d\n", i + 1, saldo[i]);
    }
    printf("\nMedia dos saldos: %.2f\n", media);
}

int main() {
    const int n = 5;
    int saldo[n];
    float media;

    lerSaldo(saldo, n);
    calcularMedia(saldo, n, &media);
    imprimirResultados(saldo, n, media);

    return 0;
}