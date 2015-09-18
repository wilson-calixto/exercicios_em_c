#include <stdio.h>

int qmagico(int n, int **matriz)
{
	int somal = 0, somac = 0, somap = 0, somas = 0, i, j,  k = 0; //Declaração das variáveis
	
	for(i = 0; i < n;i++)
	{		
		somal+=matriz[i][k]; //Soma dos elementos da linha
		k++;
		for(j = 0; j < n; j++)
		{
			somac+=matriz[i][j]; //Soma dos elementos da coluna
						
			if( i == j ) //Soma dos elementos da diagonal principal
			{
					somap+=matriz[i][j];
			}
			if( j + i == n - 1) //Soma dos elementos da diagonal secundária
				{
					
					somas+=matriz[i][j];
				}
			
		}
	}
	
	printf("%d %d\n",somap, somas);
	if((somap == somas) && (somal == somac) && (somal == somap)) return 1; //Verifica se todas as somas são iguais
	else return 0;
}