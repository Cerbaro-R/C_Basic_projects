#include <stdio.h>

void lerValores(int *valores, int n) {
    for (int i = 0; i < n; i++) {
        printf("Informe o %do valor: ", i + 1);
        scanf("%d", &valores[i]);
    }
}

void separarParesEImpares(int *valores, int n, int *pares, int *impares) {
    for (int i = 0; i < n; i++) {
        if (valores[i] % 2 == 0) {
            pares[i] = valores[i];
            impares[i] = 0;
        } else {
            impares[i] = valores[i];
            pares[i] = 0;
        }
    }
}

void imprimirResultados(int *valores, int n, int *pares, int *impares) {
    printf("\nOs valores informados foram: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", valores[i]);
    }
    printf("\n\nOs valores pares sao: \n");
    for (int i = 0; i < n; i++) {
        if (pares[i] != 0) {
            printf("%d, ", pares[i]);
        }
    }
    printf("\n\nOs valores impares sao: \n");
    for (int i = 0; i < n; i++) {
        if (impares[i] != 0) {
            printf("%d, ", impares[i]);
        }
    }
}

int main() {
    const int n = 10;
    int valores[n];
    int pares[n];
    int impares[n];

    lerValores(valores, n);
    separarParesEImpares(valores, n, pares, impares);
    imprimirResultados(valores, n, pares, impares);

    return 0;
}