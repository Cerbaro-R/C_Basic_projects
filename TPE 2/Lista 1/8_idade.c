#include <stdio.h>

int main(){

    int idade[12], crianca=0, adulto=0, idoso=0;

    for(int i=0; i<12; i++){
        printf("Informe a idade do %do paciente: ", i+1);
        scanf("%d", &idade[i]);

        if(idade[i]<18){
            crianca++;
        }else if(idade[i]>=60){
            idoso++;
        }else{
            adulto++;
        }
    }

    printf("\n%d pacientes tem menos de 18 anos\n", crianca);
    printf("%d pacientes tem entre 18 e 60 anos\n", adulto);
    printf("%d pacientes tem mais de 60 anos\n", idoso);
}