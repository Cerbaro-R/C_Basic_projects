#include <stdio.h>
int main(){

    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Qual operacao voce deseja fazer?\n1 - Soma(1)\n2 - Subtracao(2)\n3 - Multiplicacao(3)\n4 - Divisao(4)\n");
    scanf("%d", &c);

    if(c == 1){
        printf("O valor da soma e %d", a+b);
    }else if(c == 2){    
        printf("O valor da subtracao e %d", a-b);
    }else if(c == 3){    
        printf("O valor da multiplicacao e %d", a*b);
    }else if(c == 4){    
        printf("O valor da divisao e %d", a/b);
    }else{
        printf("Opcao invalida");
    }
}