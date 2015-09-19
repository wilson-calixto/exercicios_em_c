/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista1.14.c
*
* Equipe:
*
*  Juliany Raiol
*  Lucas Botinelly
*  Luiz Fernando
*  Richardson  
*/

#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char *argv[] ) 
{
	/* Declarando matriz 100 x 100 usando ponteiros */

	int **matriz;
	int i, j, v = 1; /* variável v para armazenar valores */

	matriz = ( int ** ) malloc( 100 * sizeof( int * ) ); /* Alocando vetor de ponteiros */
	
	for( i = 0; i < 100; i++ )
		matriz[ i ] = ( int * ) malloc( 100 * sizeof( int ) ); /* Alocando um novo vetor para cada ponteiro do vetor */

	inicializar( matriz, 100, 100 );	

	for( i = 0; i < 100; i++ )
		free( matriz[ i ] ); /* libera memória */

	return 0;
}
