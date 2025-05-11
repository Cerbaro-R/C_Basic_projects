#include <stdio.h>

int main() {

    float temperatura[7];
    int mais=0, menos=0;

    for(int i=0; i<7; i++) {
        printf("Informe a temperatura do %do dia da semana: ", i+1);
        scanf("%f", &temperatura[i]);

        if(temperatura[i] > 30) {
            mais++;
        }

        if(temperatura[i] < 15) {
            menos++;
        }
    }

    printf("Foram %d dias com temperatura acima de 30 graus\n", mais);
    printf("Foram %d dias com temperatura abaixo de 15 graus\n", menos);
}