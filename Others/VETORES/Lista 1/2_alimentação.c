#include <stdio.h>

int main(){
    float v[10], t=0;
    int i, d=0;

    for(i=0; i<10; i++){
        printf("Informe o valor gasto no %do dia: ", i+1);
        scanf("%f", &v[i]);

        t += v[i];
    }

    printf("No total foram gastos R$%.2f\n\n", t);

    for(i=0; i<10; i++){
        if(v[i]>50.0){
            d++;
        }
    }

    printf("Em %d dias o valor ultrapassou os R$50,00", d);
}