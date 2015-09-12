/*
 * =====================================================================================
 *
 *       Filename:  contagem.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12-09-2015 06:26:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int eh_permut(int num1,int num2)
{
	while (num1 != 0 )
	{
 		switch (conta_digitos(num2,num1 % 10))
		{
			case 1:
				num1 = num1 / 10;
				break;
			default:
				return 0;
				
		}
	}	
	return 1; 
}
