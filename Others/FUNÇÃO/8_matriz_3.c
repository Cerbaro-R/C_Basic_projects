#include <stdio.h>

void lerMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Informe o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calcularTotalVendas(int **matriz, int linhas, int colunas) {
    int totalVendas = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            totalVendas += matriz[i][j];
        }
    }
    printf("Total de vendas: %d\n", totalVendas);
}

void calcularVendasPorLinha(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        int totalVendasLinha = 0;
        for (int j = 0; j < colunas; j++) {
            totalVendasLinha += matriz[i][j];
        }
        printf("Total de vendas da linha %d: %d\n", i + 1, totalVendasLinha);
    }
}

void calcularVendasPorColuna(int **matriz, int linhas, int colunas) {
    for (int j = 0; j < colunas; j++) {
        int totalVendasColuna = 0;
        for (int i = 0; i < linhas; i++) {
            totalVendasColuna += matriz[i][j];
        }
        printf("Total de vendas da coluna %d: %d\n", j + 1, totalVendasColuna);
    }
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    const int linhas = 3;
    const int colunas = 3;
    int **matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    lerMatriz(matriz, linhas, colunas);
    imprimirMatriz(matriz, linhas, colunas);

    calcularTotalVendas(matriz, linhas, colunas);
    calcularVendasPorLinha(matriz, linhas, colunas);
    calcularVendasPorColuna(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}