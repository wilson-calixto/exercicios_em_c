/*
*Programaçao de Computadores e Algoritmos
*
*Lista 3 Questao 1
*
*Grupo:
*
*	Davi Tavares
*	Delrick Oliveira
*	Evandro Fernandes
*	Lucas Frota
*	Manoel Victor
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main()
{

	int m, n, R[100], V[100], **A, i;

	A = malloc(sizeof(int) * 100);

	printf("Informe o valor de m:");
	scanf("%d", &m);

	printf("Informe o valor de n:");
	scanf("%d", &n);

	putchar('\n');

	puts("Informe os valores de V:");
	insert_array(n, V);	

	putchar('\n');

	puts("Informe os valores de A:");
	insert_matrix(n, m, A);	

	putchar('\n');

	make_result(R, V, A, n, m);	

	putchar('\n');

	for(i = 0; i < n; i++)
	{
		printf("%d ", R[i]);
	}
	putchar('\n');	

	return 0;
}
