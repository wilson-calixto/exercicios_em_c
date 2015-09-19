#include <stdio.h>
#include <stdlib.h>
#include "insere_resultado.h"
#include <string.h>
char ***cria_tabela(int ntimes, int njogos,char ***matriz_resultado)
{
	char ***tabela;
	int i,j,s=0, indice_tabela=0;
	//Colunas da Tabela
	//Time  PG  GM GS S V GA
	
	tabela =  (char ***) malloc (ntimes*sizeof(char*));
	for ( i = 0; i < ntimes; i += 1 )
	{
		tabela[i] =  (char **) malloc (7*sizeof(char*));
		tabela[i][0] = (char *) malloc (10*sizeof(char));
		tabela[i][1] = (char *) malloc (3*sizeof(char));
		tabela[i][2] = (char *) malloc (3*sizeof(char));
		tabela[i][3] = (char *) malloc (3*sizeof(char));
		tabela[i][4] = (char *) malloc (3*sizeof(char));
		tabela[i][5] = (char *) malloc (3*sizeof(char));
		tabela[i][6] = (char *) malloc (3*sizeof(char));
	 }
	  
	for ( i = 0; i < njogos; i += 1 ) 
	{
		
		if (s > 0)
		{
			indice_tabela = pesq_matriz(s, matriz_resultado[i][0], tabela);
			if (indice_tabela == -1)
			{
				tabela[s][0] = matriz_resultado[i][0];
				printf("add %s ========\n", matriz_resultado[i][0]);
				s++;
			}else
			{
				tabela[indice_tabela][0] = matriz_resultado[i][0];

			}
			
			indice_tabela = pesq_matriz(s, matriz_resultado[i][1], tabela);

			if (indice_tabela == -1)
			{
				printf("add %s", matriz_resultado[i][1]);
				tabela[s][0] = matriz_resultado[i][1];
				s++;
			}else
			{
				tabela[indice_tabela][0] = matriz_resultado[i][1];
			}

		}else
		{
			tabela[s][0] = matriz_resultado[i][0];
			tabela[s][2] = matriz_resultado[i][2]; 
			tabela[s][3] = matriz_resultado[i][3];
			s++;
			tabela[s][2] = matriz_resultado[i][1];
			tabela[s][2] = matriz_resultado[i][3];
			tabela[s][3] = matriz_resultado[i][2];
			s++;
		}

	}
	return (tabela);
}
