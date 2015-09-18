
#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	int nlinha,i;
	int **matriz;
	scanf ( "%d", &nlinha);
	printf ( "Insira  Matrizes de ordem =   %d \n", nlinha);
	matriz = (int**) malloc (nlinha*sizeof(int*));
	
	insere_matriz(nlinha, nlinha , matriz);
	
	
	if (matriz_identidade(nlinha, matriz))
	{
		printf("A matriz 1 É identidade\n");
	}else
	{
		printf("A matriz 2 NAO É  identidade\n");
	}

	free(matriz);

	return 0;
}
