#include <stdio.h>

int main() {

    int t = 0, a, ct = 1000;

    do{
        printf("informe a quantidade de agua adicionada: ");
        scanf("%d", &a);

        t += a;
        
        if(t > ct){
            printf("Capacidade excedida\n");
        }else{
            printf("Capacidade restante: %d\n", ct - t);
        }
    }while(t < ct);

    if(t == ct){
        printf("Capacidade total ocupada\n");
    }
}