#include <stdio.h>

int main(){

    int m;

    printf("Informe o numeral de uma mes do ano: ");
    scanf("%d", &m);

    if((m==12 || (m<3))){
        printf("Verao");
    }else if((m>=3) && (m <=5)){
        printf("Outono");
    }else if((m>=6) && (m <=8)){
        printf("Inverno");
    }else if((m>=9) && (m <=11)){
        printf("Primavera");
    }
}