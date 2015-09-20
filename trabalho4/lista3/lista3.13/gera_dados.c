#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void gera_dados(int s , char **tabela, char **matriz_resultado)
{
		if (s % 2 == 0 )
		{	
	               	tabela[0] = matriz_resultado[0];
                        if (atoi(matriz_resultado[2]) > atoi(matriz_resultado[3]))
                        {
                                snprintf(tabela[1],3,"%d",3);
                                snprintf(tabela[5],3,"%d",1);
                        }else
                        {
                                snprintf(tabela[1],3,"%d",0);
                                snprintf(tabela[5],3,"%d",0);

                        }
                        tabela[2] = matriz_resultado[2]; //Gols Marcados
                        tabela[3] = matriz_resultado[3]; //Gols Sofridos
                        snprintf(tabela[4],3,"%d", atoi(tabela[2]) - atoi(tabela[3]));
                        sprintf(tabela[6],"%.2f", ((float)atoi(tabela[2])) / atoi(tabela[3]));
		}else
		{

		        tabela[0] = matriz_resultado[1];
                        if (atoi(matriz_resultado[3]) > atoi(matriz_resultado[2]))
                        {
                                snprintf(tabela[1],3,"%d",3);
                                snprintf(tabela[5],3,"%d",1);
                        }else
                        {
                                snprintf(tabela[1],3,"%d",0);
                                snprintf(tabela[5],3,"%d",0);
                        }
                        tabela[2] = matriz_resultado[3]; // Gols Marcados
                        tabela[3] = matriz_resultado[2]; // Gols Sofridos
                        sprintf(tabela[4],"%.f", (float)atoi(tabela[2]) - atoi(tabela[3]));
                        sprintf(tabela[6],"%.2f", ((float)atoi(tabela[2])) / atoi(tabela[3]));

		}
}
