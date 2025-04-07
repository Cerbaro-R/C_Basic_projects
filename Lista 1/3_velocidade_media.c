#include <stdio.h>

int main(){

    char name[100];
    float d, h, vm;

    printf("Ola piloto! digite seu nome: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Digite a distancia total percorrida em quilometros: ");
    scanf("%f", &d);
    printf("Digite o tempo total gasto em horas: ");
    scanf("%f", &h);

    vm = d/h;

    printf("A velocidade media do piloto %s foi de %.0fkm/h", name, vm);
}