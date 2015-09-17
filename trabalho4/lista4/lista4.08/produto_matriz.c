#include <stdlib.h>
void produto_matriz(int ordem, int **matriz1, int **matriz2)
{
	int i,j,s;
	int **matriz_produto, soma_produto;
	matriz_produto = (int**) malloc (sizeof(int*));
	for ( i = 0; i < ordem; i += 1 ) 
	{
		matriz_produto[i] = (int*) malloc (sizeof(int*));
		for ( j = 0; j < ordem; j += 1 ) 
		{
			soma_produto = 0; 
			for ( s = 0; s < ordem; s += 1 ) 
			{
				soma_produto =  soma_produto + matriz1[i][s]*matriz2[s][j];
			}
			
			matriz_produto[i][j] = soma_produto;
		}
	}
	imprimi_matriz(ordem, matriz_produto);	

}

