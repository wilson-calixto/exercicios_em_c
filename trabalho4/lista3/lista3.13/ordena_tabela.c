#include <stdio.h>
#include <string.h>

void ordena_tabela(int ntimes, char ***tabela) 
{
	int i, j;
	char   **eleito; // Guardar a linha
	for (i = 1; i < ntimes; i++)
	{
		eleito = tabela[i];
		
		j = i - 1;
		while ((j>=0) && (atoi(eleito[1]) > atoi(tabela[j][1]))) 
		{
			tabela[j+1] = tabela[j];
			j--;
		}
		tabela[j+1] = eleito;
	}
}
