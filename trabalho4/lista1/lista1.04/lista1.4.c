/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista1.4.c
*
* Equipe
*  Juliany Raiol
*  Lucas Botinelly
*  Luiz Fernando
*  Richardson  
*/

#include <stdio.h>
#include <stdlib.h>

/* Falta adicionar os comentários do Luiz */

int main( int argc, const char *argv[] ) 
{

	float **m; //Declarando uma matriz de ponteiros
	int i, j;

	m = ( float** ) malloc( sizeof( float *) * 50 ); //Alocando valores na memória
	for( i = 0; i < 50; i++ ) 
	{

		m[ i ] = ( float* ) malloc( sizeof( float ) * 50 ); //Leitura de matriz
  	}

	for( i = 0; i < 50; i++ ) 
	{
		for( j = 0; j < 50; j++ ) 
		{
			m[i][j] = 0.0;	//Zerando a matriz
			
		}
	}
	
	for( i = 0; i < 50; i++ ) 
	{
		free( v[ i ] ); //Liberando da memória
	}

	return 0;
}
