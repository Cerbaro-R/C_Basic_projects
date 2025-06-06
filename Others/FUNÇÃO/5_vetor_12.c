#include <stdio.h>

void lerValores(int *valores, int n) {
    for (int i = 0; i < n; i++) {
        printf("Informe o %do valor: ", i + 1);
        scanf("%d", &valores[i]);
    }
}

void verificarRepetidos(int *valores, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (valores[i] == valores[j]) {
                printf("O valor %d se repete\n", valores[i]);
            }
        }
    }
}

void imprimirValores(int *valores, int n) {
    printf("Os valores informados foram: \n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", valores[i]);
    }
    printf("\n");
}

int main() {
    const int n = 10;
    int valores[n];

    lerValores(valores, n);
    imprimirValores(valores, n);
    verificarRepetidos(valores, n);

    return 0;
}