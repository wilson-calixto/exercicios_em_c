


/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3 questao 4 letra a.
 * 
 * Equipe:
 * 
 *      Ewerton
 *      Hermann
 *      Jailson
 *      Lucas
 *      Richardson
 *      Wilson 
 *
 */



#include<stdio.h>
#include "../util.c/util.h"

float arctan(float numero);

int main()
{
	float valor;
	printf("digite o valor\n");
	scanf("%f",&valor);

	if(valor>=0 &&valor<=1)
	{
		printf("o resultado é :%f\n",arctan(valor));
	}else{
	
		printf("o valor é invalido\n");
		
	}
	return 0;
}


float arctan(float x)
{
	float resposta=0,pi=3.14,valor;
	int e=1,i=1;
	
	do{
		valor=power(x,i)/i;

		if(e%2==0)
		{
			resposta=resposta-valor;
		}else{
			resposta+=valor;
		}
		e++;		
		i=i+2;
		

		}while(valor>0.0001);
	

	return resposta;
}