#include <stdio.h>

int main(){
    
    float p, a, imc;

    printf("Digite seu peso em KG: ");
    scanf("%f", &p);
    printf("Digite sua altura em metros: ");
    scanf("%f", &a);

    imc = p/(a*a);

    if(imc<18.5){
        printf("Abaixo do peso");
    }else if ((imc>=18.5)&&(imc<25)){
        printf("Peso normal");
    }else if((imc>=25)&&(imc<30)){    
        printf("Sobrepeso");
    }else if(imc>=30){
        printf("Obesidade");
    }
}