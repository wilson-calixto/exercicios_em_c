#include <stdio.h>

//Leitura da Matriz
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
	int somal = 0, somac = 0, somap = 0, somas = 0, i, j=0; //Declaração das variáveis
	
	for(i = 0; i < n;i++)
	{		
		for(j = 0; j < n; j++)
		{
			somac+=matriz[i][j]; //Soma dos elementos da coluna
			
			if( i <= j)
			{
				somac+=matriz[i][j]; //Soma dos elementos da linha
			}
			
			if( j + i == n - 1) //Soma dos elementos da diagonal secundária
			{
				somas+=matriz[i][j];
			}
			else 
			{
				if( i == j ) //Soma dos elementos da diagonal principal
				{
					somap+=matriz[i][j];
				}	
			}
		}
	}
	
	if( (somal == somac) && (somap == somas) && (somap == somal) ) return 1; //Verifica se todas as somas são iguais
	else return 0;
}