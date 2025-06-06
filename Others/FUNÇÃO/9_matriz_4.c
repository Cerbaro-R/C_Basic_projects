#include <stdio.h>

void lerMatriz(float **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Informe a nota do aluno %d na disciplina %d: ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void calcularMediaNotas(float **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        float soma = 0;
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
        float media = soma / colunas;
        printf("Media do aluno %d: %.2f\n", i + 1, media);
    }
}

void calcularMediaDisciplinas(float **matriz, int linhas, int colunas) {
    for (int j = 0; j < colunas; j++) {
        float soma = 0;
        for (int i = 0; i < linhas; i++) {
            soma += matriz[i][j];
        }
        float media = soma / linhas;
        printf("Media da disciplina %d: %.2f\n", j + 1, media);
    }
}

void imprimirMatriz(float **matriz, int linhas, int colunas) {
    printf("Matriz de notas:\n");
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

    calcularMediaNotas(matriz, linhas, colunas);
    calcularMediaDisciplinas(matriz, linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}