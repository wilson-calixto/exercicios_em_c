#include <stdio.h>
#include <string.h>
int pesq_matriz(int ntimes, char *time, char ***tabela)
{
	int i,indice=0;
	printf("Ntimes ==  %d\n", ntimes);

	for ( i = 0; i < ntimes ; i += 1 ) 
	{
		printf("strcomp de  %s  e  %s  = %d  \n", time,tabela[i][0], strcmp (time,tabela[i][0]) );
		printf("time == %s\ntabela[%d][0] = %s\n\n", time,i,tabela[i][0] );

		if (strcmp(time,tabela[i][0]) == 0  )
		{
			return  i;
		}

	}
	return -1; 
}
