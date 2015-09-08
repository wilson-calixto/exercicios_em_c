
/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista3 questao 4 letra c.
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
#include<stdlib.h>
#include"../util.c/util.h"

float alfa(float x, float y);
float arctan(float numero);

float s_sort(float *vetor1,float n);


int main()
{
	int i,n;
	float x,y,*vet;
	printf("Digite o numero de loops\n");
	scanf("%d",&n);
	vet=malloc(n*sizeof(float));
	for(i=0;i<n;i++)
	{
		printf("Digite um valor para o x \n");
		scanf("%f",&x);
		printf("Digite um valor para o y \n");
		scanf("%f",&y);
		if(x>=0 && y>=0)	
		{
			vet[i]=alfa(x,y);
						
			
		}else{
			printf("O valor digitado é invalido");
		}
	
	}


	
	printf("O menor valor é %f",s_sort(vet,n));

	return 0;
}


float alfa(float x, float y)
{
	float pi=3.14,aux,radianos;
	if(x==0 && y==0)
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





float s_sort(float *vetor1,float n)
{
	int i,j;
	float temp;
	
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(vetor1[j]>=vetor1[i])
				{
							
					temp=vetor1[i];
					vetor1[i]=vetor1[j];
					vetor1[j]=temp;
				}		
			}	
		}

		return vetor1[0];
}







