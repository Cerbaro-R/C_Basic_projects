#include <stdio.h>

#define TAMANHO 5

void bubbleSort(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                float temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    float alturas[TAMANHO];
    float soma = 0.0, media;

    // Leitura das alturas
    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &alturas[i]);
        soma += alturas[i];
    }

    // Cálculo da média
    media = soma / TAMANHO;
    printf("\nAltura média: %.2f metros\n", media);

    // Exibindo alturas acima da média
    printf("Alturas acima da média:\n");
    for (int i = 0; i < TAMANHO; i++) {
        if (alturas[i] > media) {
            printf("Pessoa %d: %.2f metros\n", i + 1, alturas[i]);
        }
    }

    // Ordenando o vetor em ordem crescente
    bubbleSort(alturas, TAMANHO);

    // Exibindo vetor ordenado
    printf("\nAlturas em ordem crescente:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", alturas[i]);
    }
    printf("\n");

    return 0;
}
