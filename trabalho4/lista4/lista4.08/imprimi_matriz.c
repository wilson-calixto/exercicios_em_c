#include <stdio.h>
#include <stdlib.h>

void imprimi_matriz (int ordem , int **matriz)
{
	int i,j;
	
	for ( i = 0; i < ordem; i += 1 ) 
	{
	
		for ( j = 0; j < ordem; j += 1 ) 
		{
			printf("%d ", matriz[i][j] );
		}
		printf("\n");

	}
}
