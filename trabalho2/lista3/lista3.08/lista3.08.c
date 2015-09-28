/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3.08.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Jailson
 *          Lucas Botinelly
 *          Richardson
 *          Wilson Calisto *
 */
#include <stdio.h> 
#include "dice.h"
int main ( int argc, const char *argv[] )
{
    int result;

    result=dice();

    printf ( "Resultado: %d\n", result );

    return 0;
}
