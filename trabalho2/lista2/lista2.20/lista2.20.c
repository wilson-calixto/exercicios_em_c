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

#include <stdio.h>
#include "function.h"
int main ( int argc, const char *argv[] )
{
    int result,n;

    printf ( "\nInforme um valor: " );
    scanf ( "%d", &n );
    
    result=calc_sum(n);

    printf ( "\nSomatorio: %d", result );
    printf ( "\n" );
    
    return 0;
}
