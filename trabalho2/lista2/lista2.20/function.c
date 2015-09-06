#include <stdio.h>
/* 
 * Funcao recebe um inteiro
 * realiza a somatorioa dos valores digitados n vezes
 * retorna um inteiro sum
 * */

int calc_sum(int n)
{
    int i,sum,num;

    sum=0;
    
    for ( i = 1; i <= n; i++ )
    {
        printf ( "\nInforme o valor %d:", i );
        scanf ( "%d", &num );
        sum+=num;
    }

    return sum;
}


