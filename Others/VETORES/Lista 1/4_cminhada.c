#include <stdio.h>

int main(){

    float d[3], bd=0, sd=999999, m=0;
    int i;

    for(i=0;i<3;i++){
        printf("Digite a distancia percorrida em metros no %do dia: ", i+1);
        scanf("%f", &d[i]);
        m += d[i];
    }

    m = m / 3;

    for(i=0;i<3;i++){
        if(d[i]>bd){
            bd = d[i];
        }
        if(d[i]<sd){
            sd = d[i];
        }
    }

    printf("\nA media de distancia percorrida foi de %.2f metros\n", m);
    printf("A maior distancia percorrida foi de %.2f metros\n", bd);
    printf("A menor distancia percorrida foi de %.2f metros\n", sd);

}