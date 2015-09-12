/*
 * =====================================================================================
 *
 *       Filename:  lista4.01.b.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12-09-2015 06:11:19
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
	int num1, num2;
	printf ( "Digite o primeiro numero\n" );
	scanf ( "%d", &num1 );
	printf ( "Digite o segundo numero\n" );
	scanf ( "%d", &num2 );
	if (eh_permut(num1,num2))
	{
		printf ( "É permutação\n" );
	}else
	{
		printf ( "Não é permutação\n" );
	}

	return 0;
}
