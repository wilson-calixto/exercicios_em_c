#include <stdio.h>
#include <stdlib.h>



void matriz(int M[][100], int ordem)
{
	
	int l, c;

	/*M = (int **)malloc(ordem * sizeof (int *));
	for (l = 0; l < ordem; ++l)
	   M[l] = (int *)malloc(ordem * sizeof (int));*/

	for (c = 0; c < ordem; ++c)
	{
		for (l = 0; l < ordem; ++l)
		{	
			printf("Valor[%d][%d]: ", c, l);
			scanf ("%d", &M[c][l]);
		}
		
	}
	
	for (c = 0; c < ordem; c++)
	{
		for (l = 0; l < ordem; l++)
		{	
			printf("%d ", M[c][l]);
		}
		printf("\n");
	}

	/*free (M);
	M = NULL;
	return 0;*/
}

void teste_permutacao(int M[][100], int ordem)
{
    int  i, j, cont1=0, cont2=0, aux=1;
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

    printf("%d\n", cont1);
    printf("%d\n", cont2);
} 
