#include <stdio.h>

int main() {

    int altura[15], baixa=0, alta=0, i;

    for(i=0; i<15; i++) {
        printf("Informe a altura da %do pessoa em centimetros: ", i+1);
        scanf("%d", &altura[i]);

        if(altura[i] < 160) {
            baixa++;
        }else if(altura[i] > 180) {
            alta++;
        }
    }

    printf("\n%d pessoas tem menos de 160 cm\n", baixa);
    printf("%d pessoas tem mais de 180 cm\n", alta);
}