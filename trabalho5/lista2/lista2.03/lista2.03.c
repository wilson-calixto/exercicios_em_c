/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * c.c
 *
 * Equipe:
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( int argc, char *argv[] )
{
    char caracter,*string[50];
    int loops,i;
    printf ( "quantos loops-\n" );
    scanf ( "%d", &loops );
    
    for (i=0;i<loops ;i++ )
    {
        string[i]="c";
    
    
    }
    
    for (i=0;i<loops ;i++ )
    {
    
       printf ( "%c\n",*string[i] ); 
    }


    return 0;
}				/* ----------  end of function main  ---------- */

