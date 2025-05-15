#include <stdio.h>

int main() {
    float n[10], m=0;
    int i, a=0, u=0;

    for(i=0; i<10; i++){
        printf("Informe a nota do %do aluno: ", i+1);
        scanf("%f", &n[i]);
        m += n[i];

        if(n[i]<=6.0){
            a++;
        }
    }

    printf("\nA media das notas e de %.2f\n", m/10.0);
    printf("%d alunos tiraram a nota 6.0\n", a);

    for(i=0; i<10; i++){
        if(n[i]==10){
            printf("O %do  aluno tirou nota 10\n", i+1);
        }
    }
}