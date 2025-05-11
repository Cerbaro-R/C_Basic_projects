#include <stdio.h>

int main() {

    float v[10], m=0;
    int i, q, n, nn=0;

    for(i=0; i<10; i++){
        printf("informe o valor do %do produto: ", i+1);
        scanf("%f", &v[i]);
        printf("informe a quantidade vendida do %do produto: ", i+1);
        scanf("%d", &q);
        
        if(q>50){
            n++;
        }else if(q<20){
            v[i] = v[i] * q;
            m += v[i];
            nn++;
        }
    }

    m=m/nn;

    printf("\n Foram vendidos %d produtos com mais de 50 unidades\n", n);
    printf("\n A media de vendas dos produtos que vendem menos de 20 unidades foi de R$%.2f\n", m);
}