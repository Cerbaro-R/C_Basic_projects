#include <stdio.h>

int main(){

    int n[10], i, maior=0, menor=99999999999999, pb, ps;

    for (i = 0; i < 10; i++)
    {
        printf("informe um valor: ");
        scanf("%d", &n[i]);
        if(n[i]>maior){
            maior = n[i];
            pb = i+1;
        }if(n[i]<menor){
            menor = n[i];
            ps = i+1;
        }
    }
    printf("O maior valor e: %d e ocupa a %d posicao no vetor \n", maior, pb);
    printf("O menor valor e: %d e ocupa a %d posicao no vetor \n", menor, ps);
    printf("Todos os valores sao: \n");
    for(i = 0; i<10; i++){
        printf("%d   ", n[i]);
    }
}