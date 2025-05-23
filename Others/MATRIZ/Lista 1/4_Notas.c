#include <stdio.h>

int main(){
    int m[10][4], i, j, media[10], maior=0, prova[4], b=0, p;

    for(i=0; i<10; i++){
        for(j=0; j<4; j++){
            printf("Informe a nota do %do aluno: ", i+1);
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<10; i++){
        media[i] = 0;
    }

    for(i=0; i<10; i++){
        for(j=0; j<4; j++){
            media[i] += m[i][j];

        }
    }

    for(i=0; i<4; i++){
        for(j=0; j<10; j++){
            prova[i] += m[j][i];
        }
    }

    for(i=0; i<4; i++){
        if(prova[i]>b){
            b = prova[i];
            p = i+1;
        };
    }

    printf("\n");

    for(i=0; i<10; i++){
        media[i] = media[i]/4;
        if(media>7){
            maior++;            
        }
        printf("A media do %do aluno e %d\n", i+1, media[i]);
    }

    printf("\n");

    printf("O numero de alunos com media maior que 7 e %d\n", maior);

    printf("\n");

    printf("A prova com a maior media foi a %da prova\n", p);
}