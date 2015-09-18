#include <stdio.h>
#include <stdlib.h>

char  ***insere_resultado(int numero_jogos)
{
	int i,j;
	char  ***resultados = (char ***) malloc(numero_jogos*sizeof(char *));
	for ( i = 0; i < numero_jogos; i += 1 ) 
	{
		resultados[i] = (char **)malloc(4*sizeof(char));
		for ( j = 0; j < 4; j += 1 ) 
		{
			resultados[i][j] = (char *)malloc(10*sizeof(char));
			scanf("%s", resultados[i][j]);
			
		}
	}
	return(resultados);
}
