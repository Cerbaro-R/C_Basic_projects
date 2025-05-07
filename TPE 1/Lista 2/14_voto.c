#include <stdio.h>

int main(){

    int i;
    printf("Informe sua idade: ");
    scanf("%d", &i);

    if(i<16){
        printf("Nao pode votar");
    }else if((i>=16) && (i<18)){
        printf("Voto opcional");
    }else{
        printf("Voto obrigatorio");
    }
}
    