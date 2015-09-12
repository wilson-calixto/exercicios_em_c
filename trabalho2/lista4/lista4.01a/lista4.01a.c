#include <stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	unsigned long int  num1, num2;
	printf ( "Digite o primeiro numero\n" );
	scanf ( "%lu", &num1 );
	printf ( "Digite o segundo  numero\n" );
	scanf ( "%lu", &num2 );
	printf ( "O numero %lu aparece no numero  %d vezes\n", num2 , conta_digitos(num1,num2) );

	return 0;
}				/* ----------  end of function main  ---------- */
