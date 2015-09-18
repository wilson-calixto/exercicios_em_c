/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2 questao 8.
 * 
 * Equipe:
 * 
 *      Paulo Marinho 
 *      Evandro Fernandes
 *      Jackson Gomes
 *           	
 */


/* verifica se o numero e positivo */

#include<stdio.h>
#include"p.h"

int main(int argc, const char *argv[])
{
	int a, num;
	printf("digite um numero: \n");
	scanf("%d",&num);
	a = is_pos(num);
	if(a==1)
	{
		printf("positivo!\n");
	}
	else
	{
		printf("negativo!\n");
	}
	return 0;
}
