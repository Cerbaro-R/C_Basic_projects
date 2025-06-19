#include <stdio.h>

void solicitaHr(int hora[], int minuto[], int *qtdHr){
    printf("Digite a quantidade de horarios possiveis que voce deseja adicionar: ");
    scanf("%d", qtdHr);
    for(int i=0; i<*qtdHr; i++){
        printf("Digite a hora que voce deseja adicionar seguindo o padrao HH:MM: ");
        scanf("%d:%d", &hora[i], &minuto[i]);
    }
}

void imprimeHr(int hora[], int minuto[], int *qtdHr){
    for(int i=0; i<*qtdHr; i++){
        printf("%02d:%02d\n", hora[i], minuto[i]);
    }
}

int main(){

    int hora[50], minuto[50], qtdHr;

    solicitaHr(hora, minuto, &qtdHr);
    imprimeHr(hora, minuto, &qtdHr);
}