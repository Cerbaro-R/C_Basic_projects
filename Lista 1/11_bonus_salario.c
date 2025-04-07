#include <stdio.h>

int main() {

    int a;
    float s, b;
    char name[50];

    printf("Digite seu nome: ");
    scanf("%s", name);

    printf("Digite seu salario em reais: ");
    scanf("%f", &s);

    printf("Digite a quantos anos voce trabalha na empresa: ");
    scanf("%d", &a);

    if(a<3){
        b = s*0.05;
        s = s+b;
    }else if((a>2) && (a<6)){
        b = s*0.1;
        s = s+b;
    }else if(a>5){
        b = s*0.15;
        s = s + b;
    }

    printf("Parabens %s, seu bonus e de %.2f entao seu salario sera de %.2f", name, b, s);
}