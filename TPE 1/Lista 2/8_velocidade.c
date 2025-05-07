#include <stdio.h>

int main()
{
    int v;
    float m;

    printf("Informe a velocidade do veiculo");
    scanf("%d", &v);

    if(v>80){
        m=(v-80) * 5;
        printf("Veiculo acima da velocidade permitida, multa de R$%.2f", m); 
    }else {
        printf("Veiculo dentro da velocidade permitida");
    }
}