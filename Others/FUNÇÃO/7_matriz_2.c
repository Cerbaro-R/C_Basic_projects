#include <stdio.h>

void lerMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Informe o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void encontrarMaiorMenor(int **matriz, int linhas, int colunas, int *maior, int *menor) {
    *maior = matriz[0][0];
    *menor = matriz[0][0];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] > *maior) {
                *maior = matriz[i][j];
            }
            if (matriz[i][j] < *menor) {
                *menor = matriz[i][j];
            }
        }
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

    int maior, menor;
    encontrarMaiorMenor(matriz, linhas, colunas, &maior, &menor);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}