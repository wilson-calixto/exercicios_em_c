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

#include "conta_digitos"
#include <stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	int num1, num2;
	printf ( "Digite o primeiro numero\n" );
	scanf ( "%d", &num1 );
	printf ( "Digite o segundo  numero\n" );
	scanf ( "%d", &num2 );
	printf ( "O numero 2 aparece no numero  %d vezes\n", conta_digitos(num1,num2) );

	return 0;
}				/* ----------  end of function main  ---------- */
