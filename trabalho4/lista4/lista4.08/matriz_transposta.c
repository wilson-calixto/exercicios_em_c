#include <stdio.h>
#include <stdlib.h>

int matriz_transposta (int ordem , int **matriz, int **matriz2)
{
	int i,j;
	
	for ( i = 0; i < ordem; i += 1 ) 
	{
		for ( j = 0; j < ordem; j += 1 ) 
		{
			if (matriz[i][j] != matriz2[j][i] )
			{
				return 0;
			}	
		}
	}
	return 1; 
}
