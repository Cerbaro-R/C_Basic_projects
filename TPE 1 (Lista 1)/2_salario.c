#include <stdio.h>

int main(){

    char name[50];
    float s_h, h, s;
    int f;

    printf("Digite seu nome: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Digite seu salario por hora: ");
    scanf("%f", &s_h);
    printf("Digite a quatidade de horas que voce trabalhou: ");
    scanf("%f", &h);
    printf("Digite o numero de filhos que voce tem: ");
    scanf("%d", &f);

    s = (s_h * h) * (1 + 0.03*f);
    
    printf("Parabens %s seu salario e de R$%.2f", name, s);

}