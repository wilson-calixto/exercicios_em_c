/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.25.c
 * 
 * Equipe:
 * 
 *      Ewerton
 *      Hermann
 *      Jailson
 *      Lucas
 *      Richardson
 *      Wilson 
 *
 */

#include<stdio.h>
#include "../../util.c/util.h"

int main()
{
    int i;

    for ( i = 1; i <= 1000; i += 1 )
    {
        
        if ( is_perfect(i) ) 
        {
            printf ( "%d\n",i );
        }

    }

	return 0;
}


