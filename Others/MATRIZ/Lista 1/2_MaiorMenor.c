#include <stdio.h>

int main(){
    int m[7][7], maior[7], menor[7], i, j;

    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            printf("Informe o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<7; i++){
        maior[i]= 0;
        menor[i]= 99999999;
    }

    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            if(m[i][j]>maior[i]){
                maior[i]=m[i][j];
            }
            if(m[i][j]<menor[i]){
                menor[i]=m[i][j];
            }
        }
    }

    for(i=0; i<7; i++){
        printf("O maior valor da linha %d e %d\n", i+1, maior[i]);
        printf("O menor valor da linha %d e %d\n\n", i+1, menor[i]);
    }
}