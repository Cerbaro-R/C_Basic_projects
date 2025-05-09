#include <stdio.h>

int main(){

    int idade, n=0, bi=0, si=9999, c=0;
    char sexo, v='s';
    float salario, m;

    while((v=='s')||(v=='S')){
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo(M/F)");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%f", &salario);

        m += salario;

        if(idade>bi){
            bi = idade;
        }
        
        if(idade<si){
            si = idade;
        }
        
        if((idade>50)&&(salario<100.00)){
            c++;
        }

        printf("Deseja cadastrar mais alguem na pesquisa(s/n)\n");
        scanf(" %c", &v);

        n++;
    }

    m = m/n;
    printf("\nA media salarial da pesquisa e %.2f\n", m);
    printf("A idade da pessoa mais velha e %d\n", bi);
    printf("A idade da pessoa mais nova e %d\n", si);
    printf("A quantidade de pessoas com mais de 50 anos e que recebem menos do que R$100,00 e %d\n", c);

}