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
#include "f3.6.h"

int main(int argc, const char *argv[])
{
	int **a, i, j, M, N; //matriz A, i - contador que ira iterar menos, j - contador que ira iterar
			     //M - numero de linhas da matriz A, N - numero de colunas da matriz A
	printf("Quatidade de linha\n");
	scanf("%d", &M);
	printf("Quantidade de Coluna\n");
	scanf("%d", &N);

	a=(int **)malloc (M * sizeof(int **)); //aloca 'M' endereços de memoria para a matriz A
	for (i=0; i<M; i++)
	{
		a[i]=(int *)malloc (N * sizeof(int *)); // aloca 'N' endereços de memoria para cada vetor A[i]
		for (j=0; j<N; j++) 
		{
			printf("Informe a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]); //recebe do usuario um valor para a matriz A na posiçao [i][j].
		}
	}
	
	matriz(a, M, N);
	return 0;
} 
