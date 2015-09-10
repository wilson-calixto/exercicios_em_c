#include "../../util.c/util.h"
#include <stdio.h>
#include <function.h>

int mdc(int a,int b);

{
	int a,b,quociente,resto;
	
	resto = 1;	

	if(a==0)
	{
		printf("MDC: %d \n", b);
	}
	else if(b==0)
	{
		printf("MDC: %d \n", a);		
	}
	else if(a==b)
	{
		printf("MDC: %d \n", a);
	}
	else
	{
		if(a>b)
		{
			while(resto!=0)
			{
				resto = a % b;
				a = b;
				b = resto;
			}
		}
		else if(b>a)
		{
			while(resto!=0)
			{
				resto = b % a;
				b = a;
				a = resto;
			}
		}
		printf("MDC: %d \n", resto);
	}
	return 0;
}
