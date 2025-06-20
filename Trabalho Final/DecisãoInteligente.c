#include <stdio.h>
#include <string.h>

struct Pessoa    {
    char nome[50];
    int disponibilidade[50];
};

void solicitaHr(int hora[], int minuto[], int *qtdHr){
    printf("Digite a quantidade de horarios possiveis que voce deseja adicionar: ");
    scanf("%d", qtdHr);
    for(int i=0; i<*qtdHr; i++){
        printf("Digite a hora que voce deseja adicionar seguindo o padrao HH:MM: ");
        scanf("%d:%d", &hora[i], &minuto[i]);
    }
}

void solicitaQtdP(int *qtdP){
    printf("Informe quantas pessoas parcitiparao da reuniao: ");
    scanf("%d", qtdP);
}

void solicitaPessoas(struct Pessoa pessoas[], int *qtdP, int hora[], int minuto[], int *qtdHr){
    for(int i=0; i<*qtdP; i++){
        getchar();
        printf("\ninforme o nome da %da pessoa: ", i+1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")]= '\0';
        printf("\nSeja bem vindo %s, responda sua disponibilidade com 1 para disponivel e 0 para indisponivel\n\n", pessoas[i].nome);
        for(int j=0; j<*qtdHr; j++){
            printf("Informe sua disponibilidade para participar da reuniao as %02d:%02d ", hora[j], minuto[j]);
            scanf("%d", &pessoas[i].disponibilidade[j]);
        }
    }
}

void imprimeRelatorio(struct Pessoa pessoas[], int *qtdP, int *qtdHr, int hora[], int minuto[]){
    int pessoasDisponiveis[50], qtdDisponivel=0;
    printf("\n\n--------------Relatorio de disponibilidade--------------\n\n");    
    for(int i=0; i<*qtdHr; i++){
        qtdDisponivel = 0;
        printf("Horario:    %d:%d \n", hora[i], minuto[i]);
        for(int j =0; j<*qtdP; j++){
            if(pessoas[j].disponibilidade[i]==1){
                pessoasDisponiveis[qtdDisponivel] = j;
                qtdDisponivel++;
            }
        }
        printf("Pessoas disponiveis: ");
        for(int k=0; k<qtdDisponivel; k++){
            printf("\n- %s", pessoas[pessoasDisponiveis[k]].nome);
        }
        printf("\n---------------------------------\n\n");
    }
}

void verificaMelhorHorario(struct Pessoa pessoas[], int *qtdP, int *qtdHr, int hora[], int minuto[]){
    int qtdDisponivel = 0, hrPft=0, melhorHr[50], maxDisponivel=0, mlhrhr=0;
    for(int i=0; i<*qtdHr; i++){
        qtdDisponivel = 0;
        for(int j =0; j<*qtdP; j++){
            if(pessoas[j].disponibilidade[i]==1){
                qtdDisponivel++;
            }
        }
        
        if(qtdDisponivel>maxDisponivel){
            mlhrhr=0;
            maxDisponivel=qtdDisponivel;
            melhorHr[mlhrhr]=i;
            mlhrhr++;
        }else if(qtdDisponivel==maxDisponivel){ 
            melhorHr[mlhrhr]=i;
            mlhrhr++;
        }
        if(qtdDisponivel==*qtdP){
            hrPft++;
        }
    }

    if(hrPft>1){
        printf("Temos mais de um horario em que todos estao disoniveis para a reuniao!\nSao eles:\n");
        for(int i=0; i<hrPft;i++){
            printf("%02d:%02d\n",hora[melhorHr[i]], minuto[melhorHr[i]]);
        }
    }else if(hrPft==1){
        printf("As %02d:%02d todos podem participar da reuniao!", hora[melhorHr[0]], minuto[melhorHr[0]]);
    }else if(mlhrhr>1){
        printf("Nao ha nenhum horario onde todos estao disponiveis, porem temos mais de um horario em que %d pessoas estão disponiveis!\nSao eles: \n", maxDisponivel);
        for(int i=0; i<mlhrhr;i++){
            printf("%02d:%02d\n",hora[melhorHr[i]], minuto[melhorHr[i]]);
        }
    }else{
        printf("Nao ha nenhum horario onde todos estao disponiveis, porem as %02d:%02d tem %d pessoas disponiveis!\n", hora[melhorHr[0]], minuto[melhorHr[0]], maxDisponivel);
    }
}

int main(){

    int hora[50], minuto[50], qtdHr, qtdP;

    solicitaHr(hora, minuto, &qtdHr);
    solicitaQtdP(&qtdP);
    struct Pessoa pessoas[qtdP];
    solicitaPessoas(pessoas, &qtdP, hora, minuto, &qtdHr);
    imprimeRelatorio(pessoas, &qtdP, &qtdHr, hora, minuto);
    verificaMelhorHorario(pessoas, &qtdP, &qtdHr, hora, minuto);
}