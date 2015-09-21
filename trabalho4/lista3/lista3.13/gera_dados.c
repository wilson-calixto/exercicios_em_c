#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void gera_dados(int s , char **tabela, char **matriz_resultado)
{
		
		switch (s)
		{
			case 0:
				tabela[0] = matriz_resultado[0];
                        	if (atoi(matriz_resultado[2]) >= atoi(matriz_resultado[3]))
                        	{
					if (atoi(matriz_resultado[2]) == atoi(matriz_resultado[3]))
					{
						snprintf(tabela[1],3,"%d",1);
                                		snprintf(tabela[5],3,"%d",0);
					}else
					{
                                		snprintf(tabela[1],3,"%d",2);
                                		snprintf(tabela[5],3,"%d",1);
					}
                        	}else
                        	{
                                	snprintf(tabela[1],3,"%d",0);
                                	snprintf(tabela[5],3,"%d",0);

                        	}
                        	tabela[2] = matriz_resultado[2]; //Gols Marcados
                        	tabela[3] = matriz_resultado[3]; //Gols Sofridos
                        	snprintf(tabela[4],3,"%d", atoi(tabela[2]) - atoi(tabela[3]));
                        	sprintf(tabela[6],"%.2f", ((float)atoi(tabela[2])) / atoi(tabela[3]));
			break;

			 case 1:
				tabela[0] = matriz_resultado[1];
                        	if (atoi(matriz_resultado[3]) >= atoi(matriz_resultado[2]))
                        	{
                                	if (atoi(matriz_resultado[3]) == atoi(matriz_resultado[2]))
					{
						snprintf(tabela[1],3,"%d",1);
                                		snprintf(tabela[5],3,"%d",0);
					}else
					{
                                		snprintf(tabela[1],3,"%d",2);
                                		snprintf(tabela[5],3,"%d",1);
					}

                        	}else
                        	{
                                	snprintf(tabela[1],3,"%d",0);
                                	snprintf(tabela[5],3,"%d",0);
                        	}
                        	tabela[2] = matriz_resultado[3]; // Gols Marcados
                        	tabela[3] = matriz_resultado[2]; // Gols Sofridos
                        	sprintf(tabela[4],"%.f", (float)atoi(tabela[2]) - atoi(tabela[3]));
                        	sprintf(tabela[6],"%.2f", ((float)atoi(tabela[2])) / atoi(tabela[3]));
			  break;

			 case 2:
			  	tabela[0] = matriz_resultado[0];
                        	if (atoi(matriz_resultado[2]) >= (atoi(matriz_resultado[3])))
                        	{
                                	if (atoi(matriz_resultado[2]) == atoi(matriz_resultado[3]))
					{
						snprintf(tabela[1],3,"%d",atoi(tabela[1]+1));
					}else
					{
						snprintf(tabela[1],3,"%d", atoi(tabela[1]) + 2);
                                		snprintf(tabela[5],3,"%d", atoi(tabela[5]) + 1 );
					}
                        	}
                        	
                               	snprintf(tabela[2],3,"%d", atoi(tabela[2]) + atoi(matriz_resultado[2]));
                               	snprintf(tabela[3],3,"%d", atoi(tabela[3]) + atoi(matriz_resultado[3]));
				snprintf(tabela[4],3,"%d", atoi(tabela[2]) - atoi(tabela[3]));
                        	sprintf(tabela[6],"%.2f", ((float)atoi(tabela[2])) / atoi(tabela[3]));
			   break;

			 default: 
				tabela[0] = matriz_resultado[1];
                        	if (atoi(matriz_resultado[3]) >= atoi(matriz_resultado[2]))
                        	{
                               		if (atoi(matriz_resultado[3]) == atoi(matriz_resultado[2]))
					{
						snprintf(tabela[1],3,"%d",atoi(tabela[1]) + 1);
					}else
					{
						snprintf(tabela[1],3,"%d", atoi(tabela[1]) + 2);
                                		snprintf(tabela[5],3,"%d", atoi(tabela[5]) + 1 );
					}

                        	}
                               	snprintf(tabela[2],3,"%d", atoi(tabela[2]) + atoi(matriz_resultado[3]));
                               	snprintf(tabela[3],3,"%d", atoi(tabela[3]) + atoi(matriz_resultado[2]));
                        	sprintf(tabela[4],"%.f", (float)atoi(tabela[2]) - atoi(tabela[3]));
                        	sprintf(tabela[6],"%.2f", ((float)atoi(tabela[2])) / atoi(tabela[3]));
			  

		}
	
}
