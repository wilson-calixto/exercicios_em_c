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
#include "../../util.c/util.h" /*biblioteca util*/

int main ( int argc, const char *argv[] )
{
    
    float x,z,result;

    printf ( "\nInforme o base: " );
    scanf ( "%f", &x );
    printf ( "\nDigite o expoente: " );
    scanf ( "%f", &z );

    result=power(x,z);

    printf ( "\nPotencia de %.0f**%.0f=%.0f",x,z,result );
    printf ( "\n" );
    
    return 0;

}
