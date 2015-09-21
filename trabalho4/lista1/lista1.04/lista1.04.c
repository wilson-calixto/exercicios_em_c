/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista1.4.c
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
	
	float **matrx; /* Declarando matrx como um ponteiro para ponteiro */
	int i, j;

	/* Alocação de vetor de ponteiros onde cada posição aponta para outro vetor */

	matrx = ( float** ) malloc( sizeof( float * ) * 50 ); /* Alocando colunas da matriz na memória */
	for( i = 0; i < 50; i++ ) 
	{

		matrx[ i ] = ( float * ) malloc( sizeof( float ) * 50 ); /* Alocando linhas da matriz na memória */
  	}

	for( i = 0; i < 50; i++ ) 
	{
		for( j = 0; j < 50; j++ ) 
		{
			matrx[i][j] = 0.0;	/* Inicializando elementos da matriz com 0.0 */
			
		}
	}
	
	for( i = 0; i < 50; i++ ) 
	{
		free( matrx[ i ] ); /* Liberando o espaço de memória alocado */
	}

	return 0;
}
