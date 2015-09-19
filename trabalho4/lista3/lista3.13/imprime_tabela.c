#include <stdio.h>

void imprime_tabela(int ntimes, char ***tabela)
{
	int i,j;
	printf ( "Time  PG  GM  GS  S  V  GA \n" );
	
	
	for ( i = 0; i < ntimes; i += 1 ) 
	{
		printf("%s  ", tabela[i][0] );
		printf("\n"); 
	}


}

