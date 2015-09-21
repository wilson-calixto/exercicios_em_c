#include <stdio.h>
#include <stdlib.h>

void insert_array(int tamanho, int *vetor)
{
	int i;
	for ( i = 0; i < tamanho; i += 1 ) 
	{
		scanf("%d", &vetor[i]);
	}
}

void insert_matrix(int linha, int ncoluna, int **matriz)
{
	int i;
	for ( i = 0; i < linha; i += 1 ) 
	{
		matriz[i] = (int*)  malloc (ncoluna*sizeof(int*));
		insert_array(ncoluna,matriz[i]);
	}
}

void make_result(int *R, int *V, int **A, int n, int m)
{

	int i, j, aux = 0;

	for(i = 0; i < n; i++)
	{
		aux = 0;

		for(j = 0; j < m; j++)
		{
			aux += V[j] * A[j][i];
		}
		R[i] = aux;	
	}
}


