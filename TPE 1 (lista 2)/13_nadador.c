#include <stdio.h>

int main(){

    int i;

    printf("Informe a idade do nadador: ");
    scanf("%d", &i);

    if(i<=10){
        printf("Infantil");
    }else if((i>=11) && (i<15)){
        printf("Juvenil");
    }else if((i>=15) && (i<20)){
        printf("Junior");
    }else{
        printf("Adulto");
    }
}