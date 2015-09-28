#include <stdio.h>
#include <stdlib.h>

void insert_array(int tamanho, int *vetor) //funçao para ler valores para vetores.
{
	int i; //i - contador
	for ( i = 0; i < tamanho; i += 1 ) 
	{
		scanf("%d", &vetor[i]); //lê valores para um vetor.
	}
}

void insert_matrix(int linha, int ncoluna, int **matriz) //funçao para ler valores para matrizes
{
	int i; //i - contador
	for ( i = 0; i < linha; i += 1 )  
	{
		matriz[i] = (int*)  malloc (ncoluna*sizeof(int*)); //declara o tamanho da matriz
		insert_array(ncoluna,matriz[i]); // lê valores para o elemento da matriz(que é um vetor).
	}
}

void make_result(int *R, int *V, int **A, int n, int m) //funçao para calcular o vetor resultado.
{

	int i, j, aux = 0; //i - contador, j - contador, aux - acumulador

	for(i = 0; i < n; i++)
	{
		aux = 0; //aux recebe o valor 0 depois de cada iteração do 'i'

		for(j = 0; j < m; j++)
		{
			aux += V[j] * A[j][i]; //aux acumula o produto da matriz pelo vetor. 
		}
		R[i] = aux; //vetor resultado recebe o valor do acumulador.
	}
}
