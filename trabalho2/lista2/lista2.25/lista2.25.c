/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.25.c
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
    int x,z,result;

    printf ( "\nInforme o base: " );
    scanf ( "%d", &x );
    printf ( "\nDigite o expoente: " );
    scanf ( "%d", &z );

    result=calc_potencia(x,z);

    printf ( "\nPotencia de %d**%d=%d",x,z,result );
    
    return 0;
}
