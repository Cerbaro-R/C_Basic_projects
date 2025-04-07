#include <stdio.h>

int main() {
    char name[50];
    float km, rs, t;

    rs = 2.5;

    printf("Qual o nome do Motoboy?\n");
    scanf("%s", name);

    printf("Quantos KM ele rodou?\n");
    scanf("%f", &km);

    t = km*rs;

    printf("O motoboy %s deve receber %.2f reais", name, t);

}