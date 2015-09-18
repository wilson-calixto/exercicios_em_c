void read_m(int n, mat[][n])
{
	int n;
	for (i=0; i<n;i++)
	    {
		for (j=0; j<n; j++)
		{
		    printf("Digite o elemento[%d][%d]", i, j);
		    scanf("%d", &mat[i][j]);
		}
	    }
}


int qmagico(int n, int matriz[][n])
{
	int somal = 0, somac = 0, somap = 0, somas = 0, i, j;
	for(i = 0; i < n;i++)
	{
		
		for(j = 0; j < n; j++)
		{
			somac+=matriz[i][j];
			if( j >= i )
			{
				somad+=matriz[i][j];
			}
			else 
			{
				if( i >= j )
				{
					somas+=matriz[i][j];
				}	
			}
		}
		somal+=matriz[i][j];
	}
	
	if( (somal == somac) && (somap == somas) && () )
}