#include <stdio.h>
#include <string.h>

int main() {

    int i;

    struct Candidato{
        char nome[50];
        int num;
    };

    struct Candidato candidato[3];

    for(i = 0; i<3; i++){
        printf("Digite o nome do candidato: ", i+1);
        fgets(candidato[i].nome, sizeof(candidato[i].nome), stdin);
        candidato[i].nome[strcspn(candidato[i].nome, "\n")]= '\0';

        printf("Digite o numero do candidato: ", i+1);
        scanf("%d", &candidato[i].num);
        getchar();
    }

    printf("Lista de candidatos: \n");
    for(i=0; i<3; i++){
        printf("Candidato : %s | Numero %d \n", candidato[i].nome, candidato[i].num);
    }

}