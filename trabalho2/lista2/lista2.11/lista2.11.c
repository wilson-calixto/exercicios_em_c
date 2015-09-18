/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.11.c
 *
 * Equipe:
 *      Paulo Marinho
 *      Evandro Fernandes
 *      Jackson Gomes
 *      
 *
 */

	

#include <stdio.h>
#include "p.h"

int main(int argc, const char *argv[])
{
	int n1, n2, n3;

	printf("informe o primeiro numero: \n");
	scanf("%d", &n1);
	printf("informe o segundo numero: \n");
	scanf("%d", &n2);
	printf("informe o terceiro numero: \n");
	scanf("%d", &n3);

	tri_sort(n1,n2,n3);	
	return 0;
}
