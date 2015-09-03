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

int calc_somatorio(int n)
{
    int i,sum,num;

    sum=0;
    
    for ( i = 0; i < n; i++ )
    {
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
    
    result=calc_somatorio(n);

    printf ( "\nSomatorio: %d", result );
    
    return 0;
}
