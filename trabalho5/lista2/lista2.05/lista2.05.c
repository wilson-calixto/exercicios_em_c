#include <stdio.h>
#include <string.h>
#include "palindromo.h"

int main( int argc, const char *argv[] ) {

	char *string;

	printf( "Informe a primeira string: " );
	scanf( "%s", string );

	printf( "%s\n", palindromo( string, strlen( string ) ) ? "Eh palindromo" : "Nao eh palindromo" );

	return 0;
}
