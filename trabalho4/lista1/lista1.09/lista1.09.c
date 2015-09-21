/*
* Programacao de Computadores e Algoritmos
* Trabalho 4
* lista1.9.c
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
#include "bubble_sort.h"

int main( int argc, const char *argv[] ) 
{
	/* Imprimindo números ordenados */

	int *vetor; /* Declara ponteiro para vetor */
	int i, v; /* v - contém os valores a serem atribuidos ao vetor */

	vetor = ( int* ) malloc( sizeof( int ) * 5 );
	
	printf("Preencha o vetor\n");
	for( i = 0; i < 5; i++ ) 
	{
		scanf( "%d", &v ); /* Entrada de valores */
		vetor[i] = v;	
	}

	bubble_sort( vetor, 5 ); /* Chamando função bubble_sort para ordenar vetor */

	for( i = 0; i < 5; i++ ) 
	{
		printf( "%d ", vetor[ i ] ); /* Imprime vetor ordenado */
	}
	printf( "\n" );

	free( vetor ); /* Libera memória alocada */
	return 0;
}
