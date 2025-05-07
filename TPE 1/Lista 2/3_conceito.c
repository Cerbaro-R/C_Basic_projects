#include <stdio.h>

int main(){

    int a, b, c, d;
    float m;

    printf("Digite a primeira nota: ");
    scanf("%d", &a);
    printf("Digite a segunda nota: ");
    scanf("%d", &b);
    printf("Digite a terceira nota: ");
    scanf("%d", &c);
    printf("Digite a quarta nota: ");
    scanf("%d", &d);

    m = (a + b + c + d) / 4;

    if(m<3){
        printf("Sua media e %.2f, sendo assim seu conceito e E", m);
    }else if((m<=3)&&(m<5)){
        printf("Sua media e %.2f, sendo assim seu conceito e D", m);
    }else if((m>=6)&&(m<8)){
        printf("Sua media e %.2f, sendo assim seu conceito e C", m);
    }else if((m<=8)&&(m<10)){
        printf("Sua media e %.2f, sendo assim seu conceito e B", m);
    }else if(m==10){
        printf("Sua media e %.2f, sendo assim seu conceito e A", m);
    }else{
        printf("%f",m);
    }  
}