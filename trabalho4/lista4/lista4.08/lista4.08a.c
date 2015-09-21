/*
 * Programacao de Computadores e ALgoritmos
 * lista4.08a.c
 *
 * Equipe:
 *      Sergio Pinheiro
 *      Andressa Moreira
 *      Wilson Araújo
 *      Gabriel Faraco
 *      Benjamin Borges
 *
 */




#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	int nlinha,i;
	int **matriz, **matriz2;
	scanf ( "%d", &nlinha);
	printf ( "Insira  Matrizes de ordem =   %d \n", nlinha);
	matriz = (int**) malloc (nlinha*sizeof(int*));
	matriz2 = (int**) malloc (nlinha*sizeof(int*));
	
	insere_matriz(nlinha, nlinha , matriz);
	insere_matriz(nlinha, nlinha , matriz2);
	
	//imprimi_matriz(nlinha, matriz);
	//printf("\n\n "); 
	//imprimi_matriz(nlinha, matriz2);
	
	if (matriz_transposta(nlinha, matriz, matriz2))
	{
		printf("A matriz 2 É transposta\n");
	}else
	{
		printf("A matriz 2 NAO É  transposta\n");
	}

	free(matriz);
	free(matriz2);

	return 0;
}
