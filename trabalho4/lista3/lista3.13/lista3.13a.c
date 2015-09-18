#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	char **matriz_resultado;
	int npartidas=0;
	scanf("%d", &npartidas);
	matriz_resultado = (char **) malloc (npartidas*sizeof(char*));
	insere_vetor(npartidas, matriz_resultado);


	return 0;
}
