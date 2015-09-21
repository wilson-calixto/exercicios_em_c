/*
* Programacao de Computadores e Algoritmos
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

	preencher( matrx, 50, 50 );
	
	for( i = 0; i < 50; i++ ) 
	{
		free( matrx[ i ] ); /* Liberando o espaço de memória alocado */
	}

	return 0;
}
