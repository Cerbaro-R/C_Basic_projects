#include <stdio.h>

int main(){

    int m[7][4], i, j, total[7], h=0, a=0, p=0, b=0;

    for(i=0; i<7; i++){
        for(j=0; j<4; j++){
            printf("Informe o valor do %do dia e do %do setor: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<7; i++){
        total[i] = 0;
    }

    for(i=0; i<7; i++){
        for(j=0; j<4; j++){
            total[i] += m[i][j];
        }
    }

    for(i=0; i<7; i++){
        for(j=0; j<4; j++){
            if(j==0){
                h += m[i][j];
            }if(j==1){
                a += m[i][j];
            }if(j==2){
                p += m[i][j];
            }if(j==3){
                b += m[i][j];
            }
        }
    }

    printf("\n");

    for(i=0; i<7; i++){
        if(total[i]>5000){
            printf("O dia %d foi um bom dia, vendeu %d\n", i+1, total[i]);
        }else{
            printf("O dia %d foi um dia ruim, vendeu %d\n", i+1, total[i]);
        }
    }

    printf("\nO setor H vendeu %d\n", h);
    printf("O setor A vendeu %d\n", a);
    printf("O setor P vendeu %d\n", p);
    printf("O setor B vendeu %d\n", b);
}