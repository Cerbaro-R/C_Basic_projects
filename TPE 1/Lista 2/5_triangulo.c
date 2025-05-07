#include <stdio.h>

int main(){

    float a, b, c, ab, ac, bc;
    
    printf("Informe o valor do primeiro lado: ");
    scanf("%f", &a);
    printf("Informe o valor do segundo lado: ");
    scanf("%f", &b);
    printf("Informe o valor do terceiro lado: ");
    scanf("%f", &c);

    ab = a + b;
    ac = a + c;
    bc = b + c;

    if((ab >= c) && (ac >= b) && (bc >= a)){
        printf("E um trinagulo");
    }else{
        printf("Nao e um triangulo");
    }
}