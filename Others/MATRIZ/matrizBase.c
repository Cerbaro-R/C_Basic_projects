#include <stdio.h>

int main() {
    // Declarando uma matriz 3x3
    int matriz[3][3];

    // Inicializando a matriz com valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * j;
        }
    }

    // Imprimindo a matriz
    printf("Matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}