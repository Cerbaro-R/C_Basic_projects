#include <stdio.h>

int main() {
    float saque[15], t;

    int i, b=0, big=0;

    for(i=0; i<15; i++) {
        printf("Informe o valor do %do saque: ", i+1);
        scanf("%f", &saque[i]);

        if(saque[i]>500){
            b++;
        }
        if(saque[i]>1000){
            big++;
        }
        t += saque[i];
    }
    
    printf("\nForam feitos %d saques acima de R$500,00\n", b);
    printf("Foram feitos %d saques acima de R$1000,00\n", big);
    printf("O total de saques foi de R$%.2f\n", t);
}