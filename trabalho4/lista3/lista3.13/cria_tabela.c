#include <stdlib.h>
#include "insere_resultado.h"
char ***cria_tabela(int ntimes, int njogos,char ***matriz_resultado)
{
	char ***tabela;
	int i,j;
	//Colunas da Tabela
	//Time  PG  GM GS S V GA
	
	tabela =  (char ***) malloc (ntimes*sizeof(char*));
	for ( i = 0; i < ntimes; i += 1 )
	{
		tabela[i] = (char **) malloc (7*sizeof(char*));
		tabela[i][0] = (char *) malloc (10*sizeof(char));
		tabela[i][1] = (char *) malloc (3*sizeof(char));
		tabela[i][2] = (char *) malloc (3*sizeof(char));
		tabela[i][3] = (char *) malloc (3*sizeof(char));
		tabela[i][4] = (char *) malloc (3*sizeof(char));
		tabela[i][5] = (char *) malloc (3*sizeof(char));
		tabela[i][6] = (char *) malloc (3*sizeof(char));
	  	
		for ( j = 0; j < njogos; j += 1 ) 
		{
			if (i > 0)
			{
				if (pesq_matriz(i-1,matriz_resultado[i][0], tabela) == 0)
				{
					tabela[i][0] = matriz_resultado[j][0];
					//tabela[i][1] = pontos_ganhos(njogos, matriz_resultado[i][0], matriz_resultado);
				}


		}
	  }
	return (tabela);
}
