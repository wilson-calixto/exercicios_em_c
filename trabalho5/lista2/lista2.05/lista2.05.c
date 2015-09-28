#include <stdio.h>
#include <string.h>
#include "palindromo.h"

int main( int argc, const char *argv[] ) {

	char *string;
	int result;

	printf( "Informe a primeira string: " );
	scanf( "%s", string1 );

	result = palidromo( string, strlen( string ) );
	if( result )
		printf( "Eh palindromo\n" );
	else
		printf( "Nao eh palindromo\n" );

	return 0;
}
