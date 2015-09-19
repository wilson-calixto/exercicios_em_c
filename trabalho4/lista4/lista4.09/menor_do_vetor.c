/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * reswpo.c
 *
 * Equipe:
 *
 */


#include	<stdlib.h>
#include<stdio.h>



/* Dado um vetor e seu tamanho, a funcao completa esse vetor */
void completa_vetor(int *vetor,int tamanho_do_vetor)
{
    int i;
    
    for ( i=0;i<tamanho_do_vetor;i++ )
        {
        
           scanf ( "%d", &vetor[i] );      
        }
}




