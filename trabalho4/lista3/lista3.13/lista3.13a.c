#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	char ***matriz_resultado;
	char ***tabela;
	int npartidas=0;
	scanf("%d", &npartidas);
	matriz_resultado = (char ***) malloc (npartidas*sizeof(char*));
	matriz_resultado = insere_vetor(npartidas);
	

	
	free(matriz_resultado);

	return 0;
}
