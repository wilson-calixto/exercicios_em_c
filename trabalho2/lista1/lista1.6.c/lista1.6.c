#include <stdio.h>
#include "lib_function.h"

int main(int argc, const char *argv[]){
    int hr, min;
    char op;
    do{
        printf("Digite as horas: ");
        scanf("%d", &hr);
        if (is_hour(hr)==0){
            printf("Valor invalido. \n");
        }else{
            printf("Digite os minutos: ");
            scanf("%d", &min);
            if(is_minute(min)==0){
                printf("Valor invalido. \n");
            }else{
                printf("%d:%d %c.M \n ",convert_hour(hr), min, am_pm(hr)) ; 
            }
        }
        printf("Deseja tentar novamente[s/n]: ");
        scanf(" %c", &op);
        fflush(stdin);
    }while(op == 's' || op== 'S');

}
