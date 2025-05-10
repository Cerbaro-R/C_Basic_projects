#include <stdio.h>

int main(){

    float entrada, saida, saldo[3], m=0, maiorValor=-99999999;
    int i, d=0;

    for(i=1; i<=3; i++){
        if(i==1){
            printf("Digite o saldo inicial da conta: ");
            scanf("%f", &saldo[i-1]);
            if(saldo[i-1]<0){
                d++;
            }
            saldo[i] = saldo[i-1];
        }else{
            printf("Digete o valor de entrada do %do dia: ", i);
            scanf("%f", &entrada);
            saldo[i-1] += entrada;
            printf("Digete o valor de saida do %do dia: ", i);
            scanf("%f", &saida);
            saldo[i-1] -= saida;

            printf("Saldo no %do dia: %.2f\n\n", i, saldo[i-1]);
            

            if(saldo[i-1]<0){
                d++;
            }

            m += saldo[i-1];

            saldo[i] = saldo[i-1];
        }
    }

    printf("\nO saldo foi negativo durante %d dias", d);
    printf("\nO saldo medio foi de %.2f", m/3);

    for(i=0; i<3; i++){
       if(saldo[i]>maiorValor){
           maiorValor = saldo[i];
       }
    }

    printf("\nO maior saldo foi de %.2f", maiorValor);
}