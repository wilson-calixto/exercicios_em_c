#include <stdio.h>
#include <string.h>
int pesq_matriz(int ntimes, char *time, char ***tabela)
{
	int i,indice=0;

	for ( i = 0; i < ntimes ; i += 1 ) 
	{
		if (strcmp(time,tabela[i][0]) == 0  )
		{
			return  i;
		}
	}
	return -1; 
}
