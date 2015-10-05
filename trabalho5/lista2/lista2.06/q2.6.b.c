/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 5
 * ex.c
 *
 * Equipe:
 *
 *          Delrick Oliveira
 *          Lucas Botinelly
 *          Andressa Moreira
 *          Segio Alexandre 
 *          Juliany Raiol
 *           
 */

#include<stdio.h>
#include<string.h>
#include"f2.6.h"


int main(int argc, const char argv[])
{
    char s[100], t[100];
    int times;

    printf ( "digite o segmento a ser verificado na palavra\n" );
    scanf ( "%s", s );

    fflush(stdin);

    printf ( "digite a palavra \n" );
    scanf ( "%s", t );

    times = count_segments(s,t);
    printf ( " há %d segmentos\n", times );
    return 0;
} 
