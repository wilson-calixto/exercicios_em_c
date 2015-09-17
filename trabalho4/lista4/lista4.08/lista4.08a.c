
#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	int nlinha,i;
	int **matriz;
	scanf ( "%d", &nlinha);
	printf ( "Numero de linhas %d \n", nlinha);
	matriz = (int**) malloc (nlinha*sizeof(int*));
	
	insere_matriz(nlinha, nlinha , matriz);
	
	matriz_transposta(nlinha, nlinha, matriz);
	free(matriz);
	return 0;
}
