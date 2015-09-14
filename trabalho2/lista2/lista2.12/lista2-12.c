/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2-12.c
 *
 * Equipe:
 *
 *          Delrick Oliveira	
 *          Jackson Kelvin
 *          Rair Santos
 *          Sérgio Pinheiro
 *  	    Manoel Souza 
 *          Gabriel Faraco  
 */

#include<stdio.h>
#include "func.lista2.12.h"
int main( int argc, const char *argv[])
{
     int h1,h2,m1,m2, difh=0, difm=0 ;    // variáveis de horas, minutos e diferenças 
     printf("digite as horas do horario de inicio(valor entre 0-23)\n");       
    scanf ( "%d", &h1 ); 						       
    printf ( "digite os minutos do horario de inicio (valor entre 0-59)\n" );  	
    scanf ( "%d", &m1 );							// leitura das variáveis 
    printf ( "digite as horas do horario de termino (valor entre 0-23)\n");	
    scanf ( "%d", &h2 );
    printf ( "digite os minutos do horario de termino (valor entre 0-59)\n" );
    scanf ( "%d", &m2 );
    if(check_values(h1,h2,m1,m2)) // coloquei uma função como condição de entrada de if, checando a validade dos valores inseridos 
    {
        difm = dif_min(m1,m2); // retorno da função que devolve a diferença de minutos sendo atribuida a variável difm
        difh = dif_hour(h1,h2,m1,m2); // função que devolve a diferença entre as horas sendo atribuida a variável difh
	printf("A duração do jogo é de %d horas e %d minutos.\n",difh,difm);  // printando o valor das variáveis de diferença de horas e minutos
    }
    else
    {
        printf ( "Dados Inválidos \n" ); // caso o check do valor dê falso, retorna a mensagem de erro 
    }
    return 0;
}
