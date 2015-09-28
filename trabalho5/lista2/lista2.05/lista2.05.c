/*
 * Programação de Computadores e Algoritmos
 *
 * Trabalho 5
 *
 * Questao 05 lista 2
 *
 * Equipe:
 *
 *       Wilson Calisto   
 *       Jackson Gomes 
 *       Richardson Souza
 *	 Benjamin Borges
 *	 Luiz Fernando Brandão
 */

#include <stdio.h>
#include <string.h>
#include "palindromo.h"

int main( int argc, const char *argv[] ) {

	char string[ 50 ]; /*Declara vetor de caracteres */

	printf( "Informe uma string: " );
	scanf( "%s", string ); /* Ler string do usuário */

	/* Imprime se é palíndromo ou não conforme o retorno da função palíndromo utilizando o operador condicional ?: */
	printf( "%s\n", palindromo( string, strlen( string ) ) ? "Eh palindromo" : "Nao eh palindromo" );

	return 0;
}
