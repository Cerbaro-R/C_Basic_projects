#include <stdio.h>
int main()
{
    int senha_correta=1234, senha_informada, i;


    for ( i = 0; i < 3; i++)
    {
        printf("informe a senha: ");
        scanf("%d", &senha_informada);

        if (senha_informada == senha_correta)
        {
            printf("Acesso Liberado\n");
            break;
        }
        else if((senha_informada != senha_correta)&& (i==2) )
        {
            printf("Acesso Bloqueado\n");
            break;
        }
        else
        {
           printf("Acesso Negado\n"); 
        }
        
    }
    
}