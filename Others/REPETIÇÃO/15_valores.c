#include <stdio.h>

int main() {

    int i, num, p = 0, n = 0, z = 0;

    for ( i = 0; i < 15; i++){
        printf("Digite um valor inteiro: ");
        scanf("%d", &num);

        if (num>0){
            p++;
            printf("Numero positivo\n");
        }else if(num==0){
            z++;
            printf("Numero neutro\n");
        }else{
            n++;
            printf("Numero negativo\n");
        }
        
    }
    
    printf("Você informou %d numeros positivos, %d numeros negativos e %d vezes o zero", p, n, z);
}    