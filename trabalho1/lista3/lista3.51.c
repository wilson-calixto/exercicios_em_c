/*
 * Programa de Computadores e Algoritmos
 * Trabalho 1
 * Questao 3.51
 * 
 * Equipe: 
 *        Delrik
 *        Elisabeth
 *        Hermamm
 *        Luiz
 *        Luana
 *        Richardson 
 */

#include <stdio.h>

int main( int argc, const char *argv[])
{

	float n = 1, m = 1, i, elementos, soma, div;
	
	scanf( "%f", &elementos);
	printf( "S = %.0f/%.0f", n, m );
	div = n / m;
	soma = div;
	for( i = 1; i < elementos; i++ )
	{
		n++;
		m += 2;
		div = n / m;
		soma += div;
		printf(" + %.0f/%.0f", n, m );
	}

	printf("\nSoma: %.2f\n", soma );

	return 0;
} 
