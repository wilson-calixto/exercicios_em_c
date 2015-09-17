#include <stdio.h>
#include <stdlib.h>

void matriz_transposta (int ordem , int **matriz, int **matriz2)
{
	int i,j;
	
	for ( i = 0; i < linha; i += 1 ) 
	{
	
		for ( j = 0; j < coluna; j += 1 ) 
		{
			printf("%d ", matriz[i][j] );
		}
		printf("\n");

	}
}
