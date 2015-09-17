
#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	int nlinha,ncoluna,i,j;
	int **matriz;
	scanf ( "%d %d", &nlinha, &ncoluna);
	printf ( "Numero de linhas %d , e numero de Colunas %d \n", nlinha, ncoluna );
	matriz = malloc (nlinha*sizeof(int * ));
	 	
	for ( i = 0; i < nlinha; i += 1 ) 
	{
		matriz[i] = (int*) malloc (ncoluna*sizeof(int));
		insere_vetor(ncoluna, matriz[i]);
	}
	
	matriz_transposta(nlinha, ncoluna, matriz);
	free(matriz);
	return 0;
}
