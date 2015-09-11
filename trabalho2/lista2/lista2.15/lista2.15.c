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
#include "calc_mean.h"

int main ( int argc,const char *argv[] )
{
    float result;

    result=calc_mean();

    printf ( "Valor medio: %.2f\n",result );
    
    return 0;
}
