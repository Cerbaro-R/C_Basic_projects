#include <stdio.h>

void lerMatriz(float **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Informe o gasto do mês %d na categoria %d: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void calcularTotalGastos(float **matriz, int linhas, int colunas) {
    float totalGastos = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            totalGastos += matriz[i][j];
        }
    }
    printf("Total de gastos: %.2f\n", totalGastos);
}

void calcularGastosPorMes(float **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        float soma = 0;
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
        printf("Total de gastos do mês %d: %.2f\n", i + 1, soma);
    }
}

void calcularGastosPorCategoria(float **matriz, int linhas, int colunas) {
    for (int j = 0; j < colunas; j++) {
        float soma = 0;
        for (int i = 0; i < linhas; i++) {
            soma += matriz[i][j];
        }
        printf("Total de gastos da categoria %d: %.2f\n", j + 1, soma);
    }
}

void imprimirMatriz(float **matriz, int linhas, int colunas) {
    printf("Matriz de gastos:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    const int linhas = 3;
    const int colunas = 3;
    float **matriz = (float **)malloc(linhas * sizeof(float *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (float *)malloc(colunas * sizeof(float));
    }

    lerMatriz(matriz, linhas, colunas);
    imprimirMatriz(matriz, linhas, colunas);

    calcularTotalGastos(matriz, linhas, colunas);
    calcularGastosPorMes(matriz, linhas, colunas);
    calcularGastosPorCategoria(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}