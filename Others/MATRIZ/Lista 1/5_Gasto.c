#include <stdio.h>

int main(){

    int m[5][4], i, j, gasto[4], maior=0, t, d=0, media=0, md=0, gd[5];

    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            printf("Informe o valor gasto no %do dia na %da unidade: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    //calculando o gasto por unidade: 

    for(i=0; i<4; i++){
        gasto[i] = 0;
    }

    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            gasto[j] += m[i][j];
        }
    }

    printf("\n");

    for(i=0; i<4; i++){
        printf("O gasto na %da unidade foi de %d\n", i+1, gasto[i]);
    }

    //Verificando o dia com maior gasto: 

    for(i=0; i<5; i++){
        t=0;
        for(j=0; j<4; j++){
            t+=m[i][j];
            if(t>maior){
                maior = t;
                d=i+1;
            }
            
        }
    }

    printf("\n");

    printf("\nO dia com maior gasto foi o %do dia com um total de %dR$ gastos\n", d, maior);

    //identificar a media diaria e os dias que o valor gasto superou a media:
    
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            md += m[i][j];
        }
    }

    media = md/5;

    printf("\nA media diaria foi de %d\n", media);

    for(i=0; i<5; i++){
        gd[i] = 0;
    }

    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            gd[i] += m[i][j];
        }
    }

    for(i=0; i<5; i++){
        if(gd[i]>media){
            printf("O %do dia superou a media diaria\n", i+1);
        }
    }

}