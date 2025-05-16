#include <stdio.h>

int main() {
    int valor[10], par[10], impar[10];

    for(int i = 0; i < 10; i++) {
        printf("Informe o %do valor: ", i + 1);
        scanf("%d", &valor[i]);
    }

    for(int i = 0; i < 10; i++) {
        if (valor[i] % 2 == 0) {
            par[i] = valor[i];
            impar[i] = 0;
        } else {
            impar[i] = valor[i];
            par[i] = 0;
        }
    }

    printf("Os valores informados foram: \n");

    for(int i = 0; i < 10; i++) {
        printf("%d,   ", valor[i]);
    }

    printf("\nOs valores pares sao: \n");

    for(int i = 0; i < 10; i++) {
        if(par[i]==0){

        }else{
            printf("%d,   ", par[i]);
        }
    }

    printf("\nOs valores impares sao: \n");

    for(int i = 0; i < 10; i++) {
        if(impar[i]==0){
            
        }else{
            printf("%d,   ", impar[i]);
        }
    }
}