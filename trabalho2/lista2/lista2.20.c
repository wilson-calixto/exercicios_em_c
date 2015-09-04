/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.20.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Jailson
 *          Lucas
 *          Richardson
 *          Wilson 
 */

/* Funcao para realizar o somatorio de n numeros */

#include <stdio.h>

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

int main ( int argc, const char *argv[] )
{
    int result,n;

    printf ( "\nInforme um valor: " );
    scanf ( "%d", &n );
    
    result=calc_sum(n);

    printf ( "\nSomatorio: %d", result );
    
    return 0;
}
