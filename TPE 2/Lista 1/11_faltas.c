#include <stdio.h>

int main(){
    int faltas[20], nenhuma=0, mais=0;

    for(int i=0; i<20; i++){
        printf("Informe o numero de faltas do %do aluno: ", i+1);
        scanf("%d", &faltas[i]);

        if(faltas[i]==0){
            nenhuma++;
        }else if(faltas[i]>5){
            mais++;
        }
    }

    printf("\n%d alunos nao tiveram faltas\n", nenhuma);
    printf("%d alunos tiveram mais de 5 faltas\n", mais);
}