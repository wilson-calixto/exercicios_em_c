#include <stdio.h>

void matriz_transposta (int linha, int coluna , int **matriz)
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
	free(matriz);
}
