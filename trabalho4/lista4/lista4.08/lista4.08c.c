/*
 * Programacao de Computadores e ALgoritmos
 * lista4.08c.c
 *
 * Equipe:
 *      Sergio Pinheiro
 *      Andressa Moreira
 *      Wilson Araújo
 *      Gabriel Faraco
 *      Benjamin Borges

 Para executar esse programa utilizes ./lista4.08c < dados_lista4.08c.txt

 *
 */

#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	int nlinha,i;
	int **matriz, **matriz2, **matriz_produto;
	scanf ( "%d", &nlinha);
	printf ( "Insira  Matrizes de ordem =   %d \n", nlinha);
	matriz = (int**) malloc (nlinha*sizeof(int*));
	matriz2 = (int**) malloc (nlinha*sizeof(int*));
	matriz_produto = (int**) malloc (nlinha*sizeof(int*));

	insere_matriz(nlinha, nlinha , matriz);
	insere_matriz(nlinha, nlinha , matriz2);
	
	
	if (matriz_transposta(nlinha, matriz, matriz2))
	{
		produto_matriz(nlinha, matriz, matriz2);
	}else
	{
		printf("A matriz 2 NAO É  transposta\n");
	}

	free(matriz);
	free(matriz2);
	free(matriz_produto);

	return 0;
}
