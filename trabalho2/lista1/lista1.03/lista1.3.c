/*
 * =====================================================================================
 *
 *       Filename:  lista1.3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11-09-2015 16:56:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include         "soma.h"
#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: lista1.3.c 
 *  Description: Somatorio de argumentos 
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	float num1, num2, num3;
	printf ( "Digite o primeiro numero");
	scanf ( "%f", &num1 );
	printf ( "Digite o segundo numero\n" );
	scanf ( "%f", &num2 );	
	printf ( "Digite o terceiro numero\n" );
	scanf ( "%f", &num3 );
	printf ( "A soma dos tres numeros  = %f\n", soma(num1,num2,num3) );
	return 0;
}				/* ----------  end of function main  ---------- */
