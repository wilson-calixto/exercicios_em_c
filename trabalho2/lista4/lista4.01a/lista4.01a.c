/*
 * =====================================================================================
 *
 *       Filename:  lista4.01a.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11-09-2015 22:13:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

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
	printf ( "O numero %d aparece no numero  %d vezes\n", num2 , conta_digitos(num1,num2) );

	return 0;
}				/* ----------  end of function main  ---------- */
