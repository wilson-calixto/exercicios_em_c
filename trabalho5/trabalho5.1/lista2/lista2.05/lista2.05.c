/*
 /*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 2.05
 *     Equipe: 
 *     Benjamin Borges
 *     Jackson Gomes
 *     Richardson Souza
 *     Luiz Brandão
 *     Wilson Calixto
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
