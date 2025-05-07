#include <stdio.h>

int main(){

    float a, b, c, d;
    float m;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);
    printf("Digite a segunda nota: ");
    scanf("%f", &b);
    printf("Digite a terceira nota: ");
    scanf("%f", &c);
    printf("Digite a quarta nota: ");
    scanf("%f", &d);

    m = (a + b + c + d) / 4;

    if(m<5){
        printf("Sua media e %.2f, sendo assim voce esta reprovado", m);
    }else if((m>=5)&&(m<7)){
        printf("Sua media e %.2f, sendo assim voce esta de recuperacao", m);
    }else if((m>=7)&&(m<=10)){
        printf("Sua media e %.2f, sendo assim voce esta aprovado", m);
    }
}