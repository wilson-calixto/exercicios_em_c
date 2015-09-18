#include <stdio.h>
#include <stdlib.h>
#include "insere_vetor.h"
int main ( int argc, char *argv[] )
{
	char ***matriz_resultado;
	char ***tabela;
	int ntimes=0;njogos;
	scanf("%d", &ntimes);
	njogos = (ntimes * (ntimes -1))/2;
	printf("Qauntidade de jogos possiveis =  %d", njogos)

	matriz_resultado = insere_resultado(ntimes, npartidas);
	tabela = cria_tabela(matriz_resultado);
	
	
	free(matriz_resultado);

	return 0;
}
