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
	/* Imprimindo números ordenados */

	int *vetor; /* Declara ponteiro para vetor */
	int i, j, trocou = 0, v, temp; /* trocou - variável para verificar se é necessário mais um loop para ordenar vetor 
					  v - contém os valores a serem atribuidos ao vetor
					  temp - variável para ajudar na troca de elementos do vetor */

	vetor = ( int* ) malloc( sizeof( int ) * 5 );
	
	for( i = 0; i < 5; i++ ) 
	{
		scanf( "%d", &v ); /* Entrada de valores */
		vetor[i] = v;	
	}

	/* Bubble sort */ 
	for( i = 1; i < 5; i++ )
	{
		for( j = 0; j < 4; j++ ) 
		{
			if( vetor[ j ] > vetor[ j + 1 ] ) 
			{
				trocou = 1;
				temp = vetor[ j ];
				vetor[ j ] = vetor[ j + 1 ];
				vetor[ j + 1 ] = temp;
			}
		}
		
		if( !trocou ) 
		{
			break;
		}
	}

	for( i = 0; i < 5; i++ ) 
	{
		printf( "%d ", vetor[ i ] ); /* Imprime vetor ordenado */
	}
	printf( "\n" );

	free( vetor ); /* Libera memória alocada */
	return 0;
}



