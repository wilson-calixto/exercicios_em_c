#include <stdio.h>
#include "expo.h"

int main(int argc, const char *argv[])
{
    int k, n;
    printf("Informe numeros positivos nao nulos.\n");     
    scanf("%d %d", &k,&n); //recebe valores de 'k' e 'n'
    
    printf("%d\n", expo(k,n)); //mostra o resultado da multiplicações sucessivas
    printf("%d\n", cont()); //mostra a quantidade de multiplicações realizadas
   
    return 0;
}
