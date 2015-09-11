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

/* 
 * Calcula media aritimetica de varios numeros
 * ate que seja digitado 0
 * retorna um float
 */
int main ( int argc,const char *argv[] )
{
    float result;

    result=calc_mean();

    printf ( "Valor medio: %.2f\n",result );
    
    return 0;
}
