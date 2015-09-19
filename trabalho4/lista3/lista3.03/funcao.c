#include <stdio.h>
#include <stdlib.h>

void multi_matriz(float *m1, float *m2, int a, int b, int d)
{
	int i, j, l;
	float Z[a][d];

	for (i=0; i<a; i++)
	{
		for (j=0; j<d; j++)
		{
			Z[i][j] =0;		//criando a matriz multiplicação
			for (l=0; l<b; l++)
			{
				Z[i][j] = Z[i][j] + m1[i][l] * m2[l][j]; //dá erro aqui !!
			}
			
		}
	}

	for(i=0; i<a; i++)
	{
		for (j=0; j<d; j++)
		{
			printf("%f", Z[i][j]);	//imprimindo a matriz multiplicação
		}
		printf("\n");	//separando por linhas
		
	}

 
}
