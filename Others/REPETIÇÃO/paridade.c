#include <stdio.h>

int main(){
    int n, i, p = 0, x = 0, m;

    for ( i = 0; i < 20; i++){
        printf("informe um valor: ");
        scanf("%d", &n);

        m = n % 2;
        if(m>0){
            x++;
        }else{
            p++;
        }

    }

    if(p==20){
        printf("Voce informou 20 numeros pares");
    }else if(x == 20){
        printf("Voce informou 20 numeros impares");
    }else{
        printf("Voce informou %d valores pares e %d valores impares", p, x);
    }
    
}