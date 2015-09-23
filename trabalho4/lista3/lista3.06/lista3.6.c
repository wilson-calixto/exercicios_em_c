/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 06 da Lista 3
Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;
*/



#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main(int argc, const char *argv[])
{
	int **a, i, j, M, N;

	printf("Quatidade de linha\n");
	scanf("%d", &M);
	printf("Quantidade de Coluna\n");
	scanf("%d", &N);

	a=(int **)malloc (M * sizeof(int **));
	for (i=0; i<M; i++)
	{
		a[i]=(int *)malloc (N * sizeof(int *));
		for (j=0; j<N; j++) 
		{
			printf("Informe a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	matriz(a, M, N);
	return 0;
} 
