#include <stdio.h>

void lerMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Informe o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void verificarParesEImpares(int **matriz, int linhas, int colunas) {
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }
    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
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
    verificarParesEImpares(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}