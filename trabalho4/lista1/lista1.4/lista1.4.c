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

int main( int argc, const char *argv[] ) 
{

	float **m;
	int i, j;

	m = ( float** ) malloc( sizeof( float *) * 50 );
	for( i = 0; i < 50; i++ ) 
	{

		m[ i ] = ( float* ) malloc( sizeof( float ) * 50 );
  	}

	for( i = 0; i < 50; i++ ) 
	{
		for( j = 0; j < 50; j++ ) 
		{
			m[i][j] = 0.0;	
			
		}
	}
	
	for( i = 0; i < 50; i++ ) 
	{
		free( v[ i ] );
	}

	return 0;
}
