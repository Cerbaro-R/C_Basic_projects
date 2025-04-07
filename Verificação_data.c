#include <stdio.h>

int main() {

    int d, m, a, t;

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
            printf("Data valida");
        }     
    }
}