#include <stdio.h>

int main(){

    float c, d, v;

    printf("Digite o valor da compra: ");
    scanf("%f", &c);

    if(c<1000){
        printf("Sua compra não atingiu o valor necessário para ter desconto, valor da compra: R$%.2f", c);
    }else if((c>1000) && (c<1100)){
        d = c - 1000;
        c = c - d;
        printf("Sua compra ganhou um desconto de R$%.2f, valor final da compra R$%.2f", d, c);
    }else{
        d = c*0.1;
        c = c - d;
        printf("Sua compra ganhou um desconto de R$%.2f, valor final da compra R$%.2f", d, c);
    }
}