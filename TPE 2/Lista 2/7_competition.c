#include <stdio.h>
#include <string.h>

int main() {

    int i=0, j;
    char v='s';

    struct competidor
    {
        char n[50];
        int p;
    };
    
    struct competidor competidor[99];

    while(v=='s' || v=='S'){
        printf("Digite o nome do competidor: ");
        fgets(competidor[i].n, sizeof(competidor[i].n), stdin);
        competidor[i].n[strcspn(competidor[i].n, "\n")] = '\0';

        printf("Digite a pontuacao do competidor: ");
        scanf("%d", &competidor[i].p);
        getchar();

        i++;

        printf("Deseja continuar? (s/n): ");
        scanf("%c", &v);
        getchar();
    }

    for(j=0; j<i; j++){
        printf("Nome: %s | Pontuacao: %d \n", competidor[j].n, competidor[j].p);
    }
}