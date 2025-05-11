#include <stdio.h>

int main(){

    float notas[10];
    int i, maior=0, menor=0, rec=0;

    for(i=0; i<10; i++){
        printf("informe a nota do aluno: ");
        scanf("%f", &notas[i]);

        if(notas[i]>=6){
            maior++;
        }else if(notas[i]<4){
            menor++;
        }else{
            rec++;
        }
    }

    printf("Foram aprovados %d alunos\n", maior);
    printf("Foram reprovados %d alunos\n", menor);
    printf("Ficaram em recuperacao %d alunos\n", rec);
}