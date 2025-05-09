#include <stdio.h>
#include <windows.h>

int main(){

    int b = 100, d;

    while((b>0)&&(d!=0)){

        printf("Digite quantos bilhetes voce deseja: ");
        scanf("%d", &d);

        if (d>b){
            printf("Quantidade indisponivel, restam apenas %d bilhetes\n\n", b);
            Sleep(1000);
        }else if(d==b){
            printf("Ultimos %d bilhetes vendidos\n\n", d);
            b -= d;
            Sleep(1000);
        }else{
            printf("%d bilhetes vendidos\n\n", d);
            b -= d;
            Sleep(1000);
        }
        
    }
}