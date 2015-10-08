#include <stdio.h>
#include "expo.h"

int main(int argc, const char *argv[])
{
    int k, n;
    printf("Informe numeros positivos nao nulos (Z*).\n");    
    scanf("%d %d", &k,&n);    
    
    printf("%d\n", expo(k,n));
    printf("%d\n", cont());
   
    return 0;
}
