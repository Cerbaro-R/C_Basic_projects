#include <stdio.h>

int main() {
    int q;
    float v, t;

    while(t<500)   {
        printf("Digite o valor do produto: ");
        scanf("%f", &v);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &q);
        t = t + (v*q);

        if (t>500){
            printf("O valor da compra ultrapassou o limite de R$500,00");
        }else if(t==500){
            printf("voce chegou ao valor maximo do carrinho de compras");
        }else{
            printf("O valor da compra ainda nao ultrapassou o limite de R$500,00 \nO valor total da compra e de R$%.2f \n", t);  
        }
        
    }
}