/*
 * =====================================================================================
 *
 *       Filename:  q8.c
 *
 *    Description: Este programa retorna a quantidade de caracteres inseridas pelo usuario. 
 *
 *        Version:  1.0
 *        Created:  04-09-2015 09:24:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Benjamin Borges (bsb), borges.bnjamin@gmail.com
 *        Company:  CINDACTA4
 *
 * =====================================================================================
 */

#include	"util.h"
#include	<stdio.h>
/*
int qtd_num(int num)
{
	int contador;
	if ( num != 0  )
	{
		if ( num < 0 ) 
		{
			num = num*(-1);
		}
		for ( contador = 0; num >  0 ;  contador++  ) 
		{
			num = num / 10;
		}
		return contador;
	}else
	{
		return 1;
	}
}
*/
int main ( int argc, char *argv[] )
{	
	int num;
	scanf ( "%d", &num );
	printf("Quantidades de  numeros é = %d\n", qtd_num(num));
	return 0;
}				/* ----------  end of function main  ---------- */
