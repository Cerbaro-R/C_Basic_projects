#include <stdio.h>

int main(){

    int s;

    printf("Informe a senha: ");
    scanf("%d", &s);

    if(s == 1234){
        printf("Acesso Permitido");
    }else{
        printf("Acesso Negado");
    }
}