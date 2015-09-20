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
				/*
				tabela[s][0] = matriz_resultado[i][0];
				if (atoi(matriz_resultado[i][2]) >= atoi(matriz_resultado[i][3]))
				{
					if (atoi(matriz_resultado[i][2]) == atoi(matriz_resultado[i][3]))
					{
						snprintf(tabela[s][1],3,"%d",1);
						snprintf(tabela[s][5],3,"%d",0);
					}else
					{
						snprintf(tabela[s][1],3,"%d",3);
						snprintf(tabela[s][5],3,"%d",1);
					}
				}else
				{
					snprintf(tabela[s][1],3,"%d",0);				
					snprintf(tabela[s][5],3,"%d",0);
				}
				tabela[s][2] = matriz_resultado[i][2]; //Gols Marcados
				tabela[s][3] = matriz_resultado[i][3]; //Gols Sofridos
				snprintf(tabela[s][4],3,"%d", atoi(tabela[s][2]) - atoi(tabela[s][3]));
				sprintf(tabela[s][6],"%.2f", ((float)atoi(tabela[s][2])) / atoi(tabela[s][3]));
			*/
				
				gera_dados(s,tabela[s],matriz_resultado[i]);
				s++;
			}else
			{
				tabela[indice_tabela][0] = matriz_resultado[i][0];

			}
			
			indice_tabela = pesq_matriz(s, matriz_resultado[i][1], tabela);

			if (indice_tabela == -1)
			{/*
				tabela[s][0] = matriz_resultado[i][1];
                        	if (atoi(matriz_resultado[i][3]) > atoi(matriz_resultado[i][2]))
                        	{
                                	snprintf(tabela[s][1],3,"%d",3);
                                	snprintf(tabela[s][5],3,"%d",1);
                        	}else
                        	{
                                	snprintf(tabela[s][1],3,"%d",0);
                                	snprintf(tabela[s][5],3,"%d",0);
                        	}
                        	tabela[s][2] = matriz_resultado[i][3]; // Gols Marcados
                        	tabela[s][3] = matriz_resultado[i][2]; // Gols Sofridos
                        	sprintf(tabela[s][4],"%.f", (float)atoi(tabela[s][2]) - atoi(tabela[s][3]));
                        	sprintf(tabela[s][6],"%.2f", ((float)atoi(tabela[s][2])) / atoi(tabela[s][3]));
		              */
				gera_dados(s,tabela[s],matriz_resultado[i]);
				s++;
			}else
			{
				tabela[indice_tabela][0] = matriz_resultado[i][1];
			}

		}else
		{ 
			/*
			tabela[s][0] = matriz_resultado[i][0];
			if (atoi(matriz_resultado[i][2]) > atoi(matriz_resultado[i][3]))
			{
				snprintf(tabela[s][1],3,"%d",3);
				snprintf(tabela[s][5],3,"%d",1);
			}else
			{
				snprintf(tabela[s][1],3,"%d",0);				
				snprintf(tabela[s][5],3,"%d",0);

			}
			tabela[s][2] = matriz_resultado[i][2]; //Gols Marcados
			tabela[s][3] = matriz_resultado[i][3]; //Gols Sofridos
			snprintf(tabela[s][4],3,"%d", atoi(tabela[s][2]) - atoi(tabela[s][3]));
			sprintf(tabela[s][6],"%.2f", ((float)atoi(tabela[s][2])) / atoi(tabela[s][3]));
			*/
			gera_dados(s,tabela[s],matriz_resultado[i]);
			s++;
			gera_dados(s,tabela[s],matriz_resultado[i]);
			s++;
			/*
			tabela[s][0] = matriz_resultado[i][1];
			if (atoi(matriz_resultado[i][3]) > atoi(matriz_resultado[i][2]))
			{
				snprintf(tabela[s][1],3,"%d",3);				
				snprintf(tabela[s][5],3,"%d",1);
			}else
			{
				snprintf(tabela[s][1],3,"%d",0);				
				snprintf(tabela[s][5],3,"%d",0);
			}
			tabela[s][2] = matriz_resultado[i][3]; // Gols Marcados
			tabela[s][3] = matriz_resultado[i][2]; // Gols Sofridos
			sprintf(tabela[s][4],"%.f", (float)atoi(tabela[s][2]) - atoi(tabela[s][3]));
			sprintf(tabela[s][6],"%.2f", ((float)atoi(tabela[s][2])) / atoi(tabela[s][3]));
			s++;
			*/
		}

	}
	return (tabela);
}
