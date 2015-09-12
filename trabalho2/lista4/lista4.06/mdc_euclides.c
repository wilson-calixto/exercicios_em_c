#include "../../util.c/util.h"
#include <stdio.h>
#include <function.h>

//funcao para calcular o mdc atravez do algoritmo de euclides

int mdc_euclides(int a,int b);

{
	int a,b,quociente,resto; //declaracao das variaveis
	
	resto = 1;	

	if(a==0) //se a for igual a 0, o mdc sera o valor de b
	{
		printf("MDC: %d \n", b);
	}
	else if(b==0) //se b for igual a 0, o mdc sera o valor de a
	{
		printf("MDC: %d \n", a);		
	}
	else if(a==b) // se a for igual a b, o mdc sera o mesmo valor de ambos
	{
		printf("MDC: %d \n", a);
	}
	else
	{
		if(a>b)
		{
			while(resto!=0) //enquanto o resto for diferente de 0
			{
				resto = a % b; // resto recebera o resto da divisao de a por b
				a = b; //a recebe o valor de b
				b = resto; //b recebe o valor do resto
					//e assim ate que o resto seja 0
			}
		}
		else if(b>a)
		{
			while(resto!=0) //enquanto resto for diferente de 0
			{
				resto = b % a; //resto recebe o resto da divisao de b por a
				b = a; //b recebe o valor de a
				a = resto; // a recebe o valor de resto
			}
		}
		return resto;
	}
}
