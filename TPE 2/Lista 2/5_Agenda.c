#include <stdio.h>

int main(){
    int z, h, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, i = 0, j = 0, k = 0, l = 0;
    while (h!=-1){
        printf("Qual hora voce deseja reservar?\n");
        scanf("%d", &h);
        if(h==8){
            if (a == 0){
                printf("Hora agendada\n");
                a = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==9){
            if (b == 0){
                printf("Hora agendada\n");
                b = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }
        else if(h==10){
            if (c == 0){
                printf("Hora agendada\n");
                c = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==11){
            if (d == 0){
                printf("Hora agendada\n");
                d = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==12){
            if (e == 0){
                printf("Hora agendada\n");
                e = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==13){
            if (f == 0){
                printf("Hora agendada\n");
                f = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==14){
            if (g == 0){
                printf("Hora agendada\n");
                g = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==15){
            if (i == 0){
                printf("Hora agendada\n");
                i = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==16){
            if (j == 0){
                printf("Hora agendada\n");
                j = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==17){
            if (k == 0){
                printf("Hora agendada\n");
                k = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==18){
            if (l == 0){
                printf("Hora agendada\n");
                l = 1;
            }else{
                printf("Horario ja ocupado\n");
            }
        }else if(h==-1){
            printf("finalizando agenda");
        }else if((h<8)||(h>18)){
            printf("Horario fora do expediente \n");
        }
            
    } 
}