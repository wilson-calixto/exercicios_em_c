


/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3 questao 4, letra b.
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
#include"../util.c/util.h"

float alfa(float x, float y);
float arctan(float numero);


int main()
{
float radiandos=180,x,y;


printf("Digite um valor para o x \n");
scanf("%f",&x);
printf("Digie um valor para o y \n");
scanf("%f",&y);
	if(x>=0 && y>=0)	
	{
		printf("O valor é %f",alfa(x,y));
	}else{
		printf("O valor digitado é invalido");
	}
	

	return 0;
}


float alfa(float x, float y)
{
	float pi=3.14,aux,radianos;
	if(x==0 &&y==0)
	{	
		return -1;	

	}


	if(y<x)
	{
		aux=y/x;
		radianos=arctan(aux);
	}else{
		aux=(x/y);
		radianos=pi/2-arctan(aux);
	}	
	return (180*radianos)/pi;
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

