#include <stdio.h>

int main(){

    float s, f, p, vp, pm;

    printf("Informe o seu salario: ");
    scanf("%f", &s);
    printf("Informe o valor que voce deseja financiar: ");
    scanf("%f", &f);
    printf("Informe o numero de parcelas: ");
    scanf("%f", &p);

    vp = f / p;
    pm = s * 0.3;
    
    if(vp<=pm){
        printf("Credito aprovado");
    }else{
        printf("Credito negado");
    }
}