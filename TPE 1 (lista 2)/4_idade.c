#include <stdio.h> 

int main(){

    int i;

    printf("informe quando anos voce tem: ");
    scanf("%d", &i);

    if(i>=18){
        printf("Maior de idade");
    }else{
        printf("Menor de idade");
    }
}