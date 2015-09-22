#include <stdio.h>
#include <stdlib.h>



int matriz(int **M, int *p)
{
	
	int l, c, ordem=*p;

	printf("Ordem da matriz: ");
	scanf ("%d", &ordem);
	printf("\n");

	M = (int **)malloc(ordem * sizeof (int *));
	for (l = 0; l < ordem; ++l)
	   M[l] = (int *)malloc(ordem * sizeof (int));

	for (c = 0; c < ordem; ++c)
		for (l = 0; l < ordem; ++l)
		{	
			printf("Valor[%d][%d]: ", l+1, c+1);
			scanf ("%d", &M[l][c]);
		}
	printf("\n\n");

	for (c = 0; c < ordem; ++c)
	{
		for (l = 0; l < ordem; ++l)
		{	
			printf("%d ", M[l][c]);
		}
		printf("\n");
	}

	free (M);
	M = NULL;
	return 0;
}

int teste_permutacao(int **M, int ordem)
{
    int  i, j, cont1=0, cont2=0;
    for (i=0; i < ordem; i++)
    {
        
        for(j=0; j<ordem; j++)
        {
            
            if(M[i][j]==0)
            {
                cont1++;
            }
            if(M[i][j]==1)
            {
                cont2++;
            }
        }
      
    }

    printf("valor de 1: %d \nvalor de 0: %d\n", cont1, cont2);
    return 0;
} 
