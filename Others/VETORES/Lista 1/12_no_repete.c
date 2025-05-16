#include <stdio.h>

int main(){

    int va[15], vb[15], i, j, v;

    for(i=0; i<15; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%d", &va[i]);
    }

    for(i=0; i<15; i++){
        v=0;
        for(j=0;j<i;j++){
            if(va[i]==va[j]){
                v=1;
                break;
            }
        }
        if(v==0){
            vb[i]=va[i];
        }else{
            vb[i]=0;
        }
    }

    for (i = 0; i < 15; i++){
        printf("%d,    ", va[i]);
    }
    printf("\n");

    for(i=0; i<15; i++){
        if(vb[i]==0){
            
        }else{
            printf("%d,    ", vb[i]);
        }
        
    }

}