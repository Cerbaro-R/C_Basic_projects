#include <stdio.h>
#include <windows.h>

int main(){

    int p=1, q, t=0;

    printf("Ola! seja bem vindo ao restarante barriga cheia! \n\nO nosso cardapio possui os seguintes produtos: \n\n1 - Hamburguer........R$15,00\n2 - Batata frita.......R$10,00\n3 - Refrigerante.......R$5,00 \n");

    while(p!=0){
        printf("\nDigite o codigo do produto que deseja comprar:\n(Digite zero para encerrar o pedido)\n");
        scanf("%d", &p);
        if((p>0)&&(p<3)){
            printf("\nDigite a quantidade do produto que deseja comprar: \n");
            scanf("%d", &q);
        }     
        
        if(p==1){
            t += 15*q;
        }else if(p==2){
            t += 10*q;
        }else if(p==3){
            t += 5*q; 
        }else if(p==0){

        }else{
            printf("Digite um codigo de produto valido\n");
            Sleep(1000);
        }
    }

    printf("O valor total do pedido foi de R$%.2d", t);

}