#include <stdio.h>

int main() {

    int d, m, a, t, dias, b, anos, dm;

    t=0;

    while(t==0){
        printf("Digite o dia do seu nascimento: ");
        scanf("%d", &d);
        printf("Digite o mes do seu nascimento: ");
        scanf("%d", &m);
        printf("Digite o ano do seu nascimento: ");
        scanf("%d", &a);

        if(((d<0) || (d>31)) 
        || ((d>30) && ((m==4) || (m==6) || (m=9) || (m==11)))
        || ((d>28) && (m==2)) 
        || (m>12) 
        || (a>2025)){
            printf("Data invalida, voce deve digitar uma data valida\n");
        }else{
            t=1;
        }     
    }

    printf("Digite o dia de hoje: ");
        scanf("%d", &d);
        printf("Digite o mes atual: ");
        scanf("%d", &m);
        printf("Digite o ano atual: ");
        scanf("%d", &a);

    b = 4;

    a = 2025-a;

    anos = a/b;

    a = (a-anos)-1;

    if(m==1){
        dm=0;
    }else if(m==2){
        dm=31;
    }else if(m==3){
        dm=59;
    }else if(m==4){
        dm=90;
    }else if(m==5){
        dm=120;
    }else if(m==6){
        dm=151;
    }else if(m==7){
        dm=181;
    }else if(m==8){
        dm=212;
    }else if(m==9){
        dm=243;
    }else if(m==10){
        dm=273;
    }else if(m==11){
        dm=304;
    }else if(m==12){
        dm=334;   
    } 

    dias = (a*365 + anos*366)+(dm)+(d);

    printf("%d, %d, %d", anos, a, dias);
}