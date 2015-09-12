/*
 * =====================================================================================
 *
 *       Filename:  lista3.9.c
 *
 *    Description:  Description: Esse programa usará a função da questao 8 da lista 3 para  
 * gerar valores de um dado de 1 a 1000000, depois imprimirá quantas vezes o lado correspondente
 * apareceu. Repare que precisei criar 6 variáveis que correspondem a 6 lados do dado
 * depois vou incrementando a medida que a função me retorna.
 * =====================================================================================

 *
 *        Version:  1.0
 *        Created:  11-09-2015 18:11:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include	<stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *   */
int main ( int argc, char *argv[] )
{
	int i,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0, numero;

	for ( i = 0; i < 20; i += 1 ) 
	{
		switch (dice())
		{
			case 1:
				num1+=1;
			break;
			case 2:
				num2+=1;
			break;
			case 3: 
				num3+=1;
			break;
			case 4:
				num4+=1;
			break;
			case 5:
				num5+=1;
			break;
			default:
				num6+=1;

		}
	}
	printf ( "Quantidade de dados com o lado 1 = %d\n", num1 );
	printf ( "Quantidade de dados com o lado 2 = %d\n", num2 );
	printf ( "Quantidade de dados com o lado 3 = %d\n", num3 );
	printf ( "Quantidade de dados com o lado 4 = %d\n", num4 );
	printf ( "Quantidade de dados com o lado 5 = %d\n", num5 );
	printf ( "Quantidade de dados com o lado 6 = %d\n", num6 );
	return 0;
}				/* ----------  end of function main  ---------- */
