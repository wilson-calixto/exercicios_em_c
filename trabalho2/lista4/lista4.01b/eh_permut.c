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
#include "../../util.c/util.h"
int eh_permut(int num1,int num2)
{

	while (num2 != 0 )
	{
		switch (conta_digitos(num1,num2 % 10))
		{
			case 1:
				num2 = num2 / 10;
				break;
			default:
				return 0;
		}
	}
	return 1; 
}
