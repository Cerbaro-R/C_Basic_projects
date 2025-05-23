#include <stdio.h>

int main(){
    int m[8][6], i, j, p=0, imp=0;

    for(i=0; i<8; i++){
        for(j=0; j<6; j++){
            printf("Informe o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<8; i++){
        for(j=0; j<6; j++){
            if(m[i][j]%2==0){
                p++;
            }else{
                imp++;
            }
        }
    }

    printf("A soma dos numeros pares e %d\n", p);
    printf("A soma dos numeros impares e %d\n", imp);

}