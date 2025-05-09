#include <stdio.h>

int main(){

    float notas[3], media;

    for(int i=0; i<3; i++){
        printf("informe a nota do aluno: ");
        scanf("%f", &notas[i]);
    }

    for(int i = 0; i<3; i++){
        media += notas[i];
    }

    media = media/3;

    printf("%.2f", media);
}