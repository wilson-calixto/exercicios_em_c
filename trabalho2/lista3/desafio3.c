/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.25.c
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

int is_perfect(int num);

int main()
{


	return 0;
}

int is_perfect(int num)
{
	int i,acm,vet[10];
	acm=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			vet[i]=acm;			
			acm=acm+i;
		}	
	}		
}
