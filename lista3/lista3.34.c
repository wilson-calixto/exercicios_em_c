/*
 * Programa de Computadores e Algoritmos
 * Trabalho 1
 * Questao 3.34
 *
 * Equipe: 
 *         Delrik
 *         Elisabeth
 *         Hermamm
 *         Luis
 *         Luana
 *         Richardson
 *
 */

#include<stdio.h>

int main( int argc, const char *argv[])
{
	int n,i,count;
	printf("Digite um número\n");
	scanf("%d", &n);
	count=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=count+1;					
		}
	}
	if(count!=0||n==1)
	{
		printf("Não é primo\n");
	}
	else
	{
		printf("É primo\n");
	}
	return 0 ;
}
