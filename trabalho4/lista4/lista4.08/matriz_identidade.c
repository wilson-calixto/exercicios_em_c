#include <stdio.h>
#include <stdlib.h>

int matriz_identidade (int ordem , int **matriz)
{
	int i,j;
	
	for ( i = 0; i < ordem; i += 1 ) 
	{
		for ( j = 0; j < ordem; j += 1 ) 
		{
			if (i == j)
			{
				if (matriz[i][j] != 1)
				{
					return 0;
				}
			}
			else
			{
				if (matriz[i][j] != 0 )
				{
					return 0;
				}

			}
		}
	}
	return 1; 
}
