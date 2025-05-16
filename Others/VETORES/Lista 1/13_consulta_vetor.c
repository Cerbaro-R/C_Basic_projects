#include <stdio.h>

int main(){

    int v[20], i, c;

    for(i=0; i<20; i++){
        printf("Informe o %do valor: ", i+1);
        scanf("%d", &v[i]);
    }

    printf("Informe o valor que deseja consultar: ");
    scanf("%d", &c);

    for(i=0; i<20; i++){
        if(v[i]==c){
            printf("O valor %d foi encontrado na posicao %d", c, i+1);
        }
    }

}