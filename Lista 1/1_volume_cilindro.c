#include <stdio.h>

int main(){
    
    float r, a, v;

    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);
    printf("Digite a altura do cilindo: ");
    scanf("%f", &a);

    v = (3.14*(r*r))*a;

    printf("O volume do cilindro eh: %f", v);
}