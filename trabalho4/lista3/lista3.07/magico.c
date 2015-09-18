#include <stdio.h>
void read_m(int n, int mat[][n])
{
	int i,j;
	for (i=0; i<n;i++)
	    {
		for (j=0; j<n; j++)
		{
		    scanf("%d", &mat[i][j]);
		}
	    }
}


int qmagico(int n, int matriz[][n])
{
	int somal = 0, somac = 0, somap = 0, somas = 0, i, j;
	for(i = 0; i < n;i++)
	{
		somal+=matriz[i][j];
		for(j = 0; j < n; j++)
		{
			somac+=matriz[i][j];
			if( j >= i )
			{
				somap+=matriz[i][j];
			}
			else 
			{
				if( i == j )
				{
					somas+=matriz[i][j];
				}	
			}
		}
	}
	
	if( (somal == somac) && (somap == somas) && (somap == somal) ) return 1;
	else return 0;
}