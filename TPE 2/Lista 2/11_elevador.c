#include <stdio.h>

int main(){

    int i, p = 0, s, d, a;

    printf("Digite o numero de andares que possui o predio: ");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
        if(i==1){
            printf("Digite a quantidade de pessoas que subiram no primeiro andar: ");
            scanf("%d", &s);

            p += s;
        }else{
            printf("Digite a quantidade de pessoas que subiram no %do andar: ", i);
            scanf("%d", &s);
            p += s;
            printf("Digite a quantidade de pessoas que desceram no %do andar: ", i);
            scanf("%d", &d);
            p -= d;
            if (p>15){
                printf("Excesso de passageiros, %d pessoas deverao ficar no %do andar\n", p-15, a);
                p = 15;
            }

            if(a==i){
                printf("O elevador chegou ao ultimo andar, %d pessoas irao descer", p);
            }

        }
    }
}