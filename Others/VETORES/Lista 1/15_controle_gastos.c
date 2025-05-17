#include <stdio.h>

int main(){

    float g[5], o, m=0, media = 0, gb[5];
    int i, a=0, d, s=0;

    for(i=0;i<5;i++){
        printf("Informe o valor de orcamento para o %do dia: ", i+1);
        scanf("%f", &o);
        printf("Informe o valor gasto neste dia: ", i+1);
        scanf("%f", &g[i]);
        if(g[i]>o){
            a++;
        }
        o=g[i]-o;

        if(o>m){
            m=o;
            d=i+1;
        }

        if(o<=0){
            gb[i]=g[i];
        }else{
            gb[i]=0;
        }
        media+= g[i];
    }

    if(m>0){
        printf("\nDurante %d dias o gasto foi maior que o orcamento\n", a);
        printf("O dia que o valor gasto mais extrapolou o orcamento foi o dia %d com R$%.2f gastos a mais\n\n", d, m);
    }else{
        printf("\nTodos os dias o valor gasto ficou dentro do orcamento\n\n");
    }

    for(i=0; i<5; i++){
        if(gb[i]>0){
            printf("O valor gasto no %d dia nao ultapassou o orcamento e foi R$%.2f\n", i+1, g[i]);
        }
    }

    media = media/5;

    
    
    for(i=0; i<5; i++){
        if(g[i]>m){
            s++;
        }
    }

    printf("\nA media geral de gastos foi de R$%.2f\nO gasto foi maior que a media em %d dias", media, s);

}