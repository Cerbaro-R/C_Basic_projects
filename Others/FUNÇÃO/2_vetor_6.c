#include <stdio.h>

void lerNotas(float *notas, int n) {
    for (int i = 0; i < n; i++) {
        printf("Informe a nota do %do aluno: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

void calcularMedia(float *notas, int n, float *media) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    *media = soma / n;
}

void imprimirResultados(float *notas, int n, float media) {
    printf("\nMedia das notas: %.2f\n", media);
    int a = 0;
    for (int i = 0; i < n; i++) {
        if (notas[i] <= 6.0) {
            a++;
        }
    }
    printf("%d alunos tiraram nota abaixo de 6.0\n", a);
    for (int i = 0; i < n; i++) {
        if (notas[i] == 10) {
            printf("O %do aluno tirou nota 10\n", i + 1);
        }
    }
}

int main() {
    const int n = 10;
    float notas[n];
    float media;

    lerNotas(notas, n);
    calcularMedia(notas, n, &media);
    imprimirResultados(notas, n, media);

    return 0;
}