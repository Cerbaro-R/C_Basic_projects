#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int i, v = 0, v1 = 0, v2 = 0, v3 = 0, b = 0;

    struct Candidato {
        char nome[50];
        int num;
    };

    struct Candidato candidato[3];

    for (i = 0; i < 3; i++) {
        printf("Digite o nome do candidato: ");
        fgets(candidato[i].nome, sizeof(candidato[i].nome), stdin);
        candidato[i].nome[strcspn(candidato[i].nome, "\n")] = '\0';
        printf("Digite o numero do candidato: ");
        scanf("%d", &candidato[i].num);
        getchar();
    }

    system("cls");

    while (v != 999) {
        printf("Lista de candidatos: \n");
        for (i = 0; i < 3; i++) {
            printf("Candidato: %s | Numero: %d \n", candidato[i].nome, candidato[i].num);
        }
        printf("Para voto em branco ou nulo digite 0\n");
        printf("Digite o numero do seu candidato: ");
        scanf("%d", &v);

        if (v == candidato[0].num) {
            v1++;
            printf("Voce votou no candidato %s\nObrigado por votar!\n", candidato[0].nome);
            Sleep(1000);  // 1 segundo de espera
            system("cls"); // Limpa a tela
        } else if (v == candidato[1].num) {
            v2++;
            printf("Voce votou no candidato %s\nObrigado por votar!\n", candidato[1].nome);
            Sleep(1000);
            system("cls");
        } else if (v == candidato[2].num) {
            v3++;
            printf("Voce votou no candidato %s\nObrigado por votar!\n", candidato[2].nome);
            Sleep(1000);
            system("cls");
        } else if (v == 999) {
            printf("Votacao encerrada.\n\n");
            break;
        } else if (v == 0) {
            b++;
            printf("Voce votou em branco\nObrigado por votar!\n");
            Sleep(2000);
            system("cls");
        } else {
            printf("Opção de voto invalida.\n");
            Sleep(2000);
            system("cls");
        }
    }

    if(v1 > v2 && v1 > v3) {
        printf("o total de votos foi de %d\n \n", v1 + v2 + v3 + b);
        printf("O candidato %s foi o vencedor com %d votos\n", candidato[0].nome, v1);
        printf("O candidato %s recebeu %d votos\n", candidato[1].nome, v2);
        printf("O candidato %s recebeu %d votos\n", candidato[2].nome, v3);
        printf("Votos em branco: %d\n", b);
    }else if(v2 > v1 && v2 > v3) {
        printf("o total de votos foi de %d\n \n", v1 + v2 + v3 + b);
        printf("O candidato %s foi o vencedor com %d votos\n", candidato[1].nome, v2);
        printf("O candidato %s recebeu %d votos\n", candidato[0].nome, v1);
        printf("O candidato %s recebeu %d votos\n", candidato[2].nome, v3);
        printf("Votos em branco: %d\n", b);
    }else if(v3 > v1 && v3 > v2) {
        printf("o total de votos foi de %d\n \n", v1 + v2 + v3 + b);
        printf("O candidato %s foi o vencedor com %d votos\n", candidato[2].nome, v3);
        printf("O candidato %s recebeu %d votos\n", candidato[0].nome, v1);
        printf("O candidato %s recebeu %d votos\n", candidato[1].nome, v2);
        printf("Votos em branco: %d\n", b);
    }else if(v1 == v2 && v1 > v3) {
        printf("o total de votos foi de %d\n \n", v1 + v2 + v3 + b);
        printf("os candidato %s e %s empataram com %d votos\n", candidato[0].nome, candidato[1].nome, v1);
        printf("O candidato %s recebeu %d votos\n", candidato[2].nome, v3);
        printf("Votos em branco: %d\n", b);
    }else if(v1 == v3 && v1 > v2) {
        printf("o total de votos foi de %d\n \n", v1 + v2 + v3 + b);
        printf("os candidato %s e %s empataram com %d votos\n", candidato[0].nome, candidato[2].nome, v1);
        printf("O candidato %s recebeu %d votos\n", candidato[1].nome, v2);
        printf("Votos em branco: %d\n", b);
    }else if(v2 == v3 && v2 > v1) {
        printf("o total de votos foi de %d\n \n", v1 + v2 + v3 + b);
        printf("os candidato %s e %s empataram com %d votos\n", candidato[1].nome, candidato[2].nome, v2);
        printf("O candidato %s recebeu %d votos\n", candidato[0].nome, v1);
        printf("Votos em branco: %d\n", b);
    }else if(v1 == v2 && v1 == v3) {
        printf("o total de votos foi de %d\n \n", v1 + v2 + v3 + b);
        printf("os candidato %s, %s e %s empataram com %d votos\n", candidato[0].nome, candidato[1].nome, candidato[2].nome, v1);
        printf("Votos em branco: %d\n", b);
    }
}
