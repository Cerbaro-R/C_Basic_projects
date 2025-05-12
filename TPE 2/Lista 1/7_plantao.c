#include <stdio.h>

int main(){
    
    int i, idade[12], crianca=0, adulto=0, idoso=0, media=0;

    for(i=0; i<12; i++){
        printf("Informe a idade do %do paciente: ", i+1);
        scanf("%d", &idade[i]);

        if(idade[i]<12){
            crianca++;
        }else if(idade[i]>60){
            idoso++;
        }else{
            adulto++;
            media+=idade[i];
        }
    }

    media = media/adulto;

    printf("\n%d pacientes sao criancas\n", crianca);
    printf("%d pacientes sao adultos\n", adulto);
    printf("%d pacientes sao idosos\n", idoso);
    printf("A media de idade dos adultos foi de %d anos\n", media);
}