#include "insere_resultado.h"
#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char *argv[] )
{
	char ***matriz_resultado;
	char ***tabela;
	int ntimes=0,njogos;
	scanf("%d", &ntimes);
	njogos = (ntimes * (ntimes -1))/2;
	printf("Qauntidade de jogos possiveis =  %d", njogos);

	matriz_resultado = insere_resultado(njogos);
	//tabela = cria_tabela(matriz_resultado);
	
	
	free(matriz_resultado);

	return 0;
}
