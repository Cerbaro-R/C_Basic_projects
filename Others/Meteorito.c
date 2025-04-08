#include <stdio.h>

int main(){

    int x1, y1, x2, y2, mx, my, m;
    char s;

    printf("Informe a coordenada x1:");
    scanf("%d", &x1);
    printf("Informe a coordenada y1:");
    scanf("%d", &y1);    
    printf("Informe a coordenada x2:");
    scanf("%d", &x2);
    printf("Informe a coordenada y2:");
    scanf("%d", &y2);

    printf("O valor das coordenadas sao %d, %d, %d, %d\n", x1, y1, x2, y2);

    m = 0;
    s = 's';

    /*while (s == 's')
    {
        printf("informe a coordenada x do meteorito: ");
        scanf("%d", &mx);
        printf("informe a coordenada y do meteorito: ");
        scanf("%d", &my);

        if((mx>=x1) && (mx<=x2) && (my>=y1) && (my<=y2)){
            printf("O meteorito caiu dentro da fazenda\n");
            m= m + 1;
        }else{
            printf("O meteorito nao caiu dentro da fazenda\n");
        }

        printf("Deseja informar outra coordenada? (s/n)");
        scanf(" %c", &s);
    }
    */

    while (s == 's')
    {
        printf("informe a coordenada x do meteorito: ");
        scanf("%d", &mx);
        printf("informe a coordenada y do meteorito: ");
        scanf("%d", &my);

        if((mx<x1) || (mx>x2) || (my<y1) || (my>y2)){
            printf("O meteorito caiu fora da fazenda\n");
        }else{
            printf("O meteorito nao caiu fora da fazenda\n");
            m= m + 1;

        }

        printf("Deseja informar outra coordenada? (s/n)");
        scanf(" %c", &s);
    }
    
    printf("O numero de meteoritos que caiu na fazenda foi de: %d", m);
}