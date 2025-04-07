#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n>0){
        if(n%2==0){
            printf("Numero par");
        }else{

        printf("Numero impar");
        }
    }else{
        printf("Este numero nao e positivo");
    }

}