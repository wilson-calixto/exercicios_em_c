/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * main.lista2-12.c
 *
 * Equipe:
 *
 *          Ewerton
 *          Hermann
 *          Jailson
 *          Lucas
 *  
 *           
 */

#include<stdio.h>
#include "func.lista2.12.h"
int main( int argc, const char *argv[])
{
     int h1,h2,m1,m2, difh=0, difm=0 ;
     printf("digite as horas do horario de inicio(valor entre 0-23)\n");
    scanf ( "%d", &h1 ); 
    printf ( "digite os minutos do horario de inicio (valor entre 0-59)\n" );
    scanf ( "%d", &m1 );
    printf ( "digite as horas do horario de termino (valor entre 0-23)\n");
    scanf ( "%d", &h2 );
    printf ( "digite os minutos do horario de termino (valor entre 0-59)\n" );
    scanf ( "%d", &m2 );
    if(check_values(h1,h2,m1,m2))
    {
        difm = dif_min(m1,m2);
        difh = dif_hour(h1,h2,m1,m2);
	printf("A duração do jogo é de %d horas e %d minutos.\n",difh,difm);
    }
    else
    {
        printf ( "Dados Inválidos \n" );
    }
    return 0;
}
