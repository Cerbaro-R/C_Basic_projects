#include <stdio.h>

int main(){

    int velocidade[20], media=0, n=0, i, t=0;

    for(i=0; i<20; i++){
        printf("Informe a velocidade do %do carro: ", i+1);
        scanf("%d", &velocidade[i]);

        if(velocidade[i]>60){
            n++;
        }else{
            media += velocidade[i];
            t++;
        }
    }

    media = media/t;

    printf("\n%d carros ultrapassaram a velocidade permitida\n", n);
    printf("A media de velocidade dos carros que nao ultrapassaram foi de %d km/h\n", media);
}