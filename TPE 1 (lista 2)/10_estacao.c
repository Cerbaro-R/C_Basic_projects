#include <stdio.h>

int main(){

    int m;

    printf("Informe o numeral de uma mes do ano: ");
    scanf("%d", &m);

    if(m<4){
        printf("Verao");
    }else if((m>=4) && (m <=6)){
        printf("Outono");
    }else if((m>=7) && (m <=9)){
        printf("Inverno");
    }else if(m<=12){
        printf("Primavera");
    }
}