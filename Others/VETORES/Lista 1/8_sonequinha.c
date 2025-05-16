#include <stdio.h>

int main(){

    float dia[30], m=0, ms=0, sa, sb, sc, sd;
    int i;

    for(i=0; i<30; i++){
        printf("Informe a quantidade de horas dormidas no %do dia: ", i+1);
        scanf("%f", &dia[i]);
        m += dia[i];
        if(dia[i]>ms){
            ms = dia[i];
        }
        if((i+1)==7){
            sa = m/7.0;
            m=0;
        }else if((i+1)==14){
            sb = m/7.0;
            m=0;
        }else if((i+1)==21){
            sc = m/7.0;
            m=0;
        }else if((i+1)==28){
            sd = m/7.0;
            m=0;
        }
    }

    printf("\nA media de horas dormidas na primeira semana foi de %.2f horas\n", sa);
    printf("A media de horas dormidas na segunda semana foi de %.2f horas\n", sb);
    printf("A media de horas dormidas na terceira semana foi de %.2f horas\n", sc);
    printf("A media de horas dormidas na quarta semana foi de %.2f horas\n", sd);
    printf("O maior numero de horas dormidas foi de %.2f horas\n", ms);


}