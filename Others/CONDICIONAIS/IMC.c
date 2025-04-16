#include <stdio.h>

int main()
{
    float p, m, a;
    
    printf("Digite seu peso em KG: ");
    scanf("%f", &p);
    printf("Digite sua altura em metros: ");
    scanf("%f", &m);
    
    a = p/(m*m);
    
    if(a<18.5){
        printf("Magreza");
    }if ((a>=18.5)&&(a<25)){
        printf("Normal");
    }if((a>=25)&&(a<30)){
        printf("Sobrepeso");
    }if((a>=30)&&(a<35)){
        printf("obesidade grau 1");
    }if((a>=35)&&(a<40)){
        printf("obesidade grau 2");
    }if(a>40){
        printf("obesidade grau 3");
    }
}