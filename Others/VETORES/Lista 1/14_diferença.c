#include <stdio.h>

int main(){

    int v[10], i, b=0, s=999999, d;

    for(i=0; i<10; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%d", &v[i]);

        if(v[i]>b){
            b=v[i];
        }
        if(v[i]<s){
            s=v[i];
        }
    }

    d=b-s;

    printf("A diferenca entre o maior e o menor valor e: %d", d);


}