#include <stdio.h>

int qmagico(int n, int **matriz)
{
	int somal = 0, somac = 0, somap = 0, somas = 0;
	int i, j = 0,k = 0, m = 0; //Índices da matriz
	int resultado = 0; //variável que será usada na comparação das somas linha e somas coluna
	
	for(i = 0; i < n;i++)
	{	
	
		//Verifica o somatório da linha	
		for(k = 0; k < n;k++)
		{
			somal+=matriz[k][m]; //Soma dos elementos da linha
		}
		
		//Verifica o somatório da coluna, diagonal princial e secundária
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
		
		//Verifica se o somatório da linha é igual ao da coluna
		if(somac == somal) resultado = 1;
		else
		{
			resultado = 0;
			break;
		}
		
		//Zerando as variáveis para o próximo loop
		somac = 0;
		somal = 0;
	}
	
	if((somap == somas) && resultado) return 1; //Verifica se todas as somas são iguais
	else return 0;
}