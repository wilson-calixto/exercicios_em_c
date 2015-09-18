#include <stdio.h>
#include <stdlib.h>
void insere_vetor(int numero_jogos,  char** resultados)
{
	int i,j;
	char dados[10];  
	for ( i = 0; i < numero_jogos; i += 1 ) 
	{
		resultados[i] = (char*) malloc (4*sizeof(char*));
		for ( j = 0; j < 3; j += 1 ) 
		{
			scanf("%s", resultados[i][j]);
			
		}
	}
}
