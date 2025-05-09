#include <stdio.h>

int main(){

    int t[7], i;
    float m = 0;

    for(i=0; i<7; i++){
        printf("Informe a temperatura do %do dia da semana: ", i+1);
        scanf("%d", &t[i]);

        m += t[i];
    }

    m = m / 7;

    printf("\nA media de temperatura da semana foi de %.2f celsius\n", m);

    for(i=0; i<7; i++){
        if(t[i]<m){
            printf("A temperatura no %do dia da semana foi menor do que a media\n", i+1);
        }
    }
}