#include <stdio.h>

void imprime_tabela(int ntimes, char ***tabela)
{
	int i,j;
	printf ( "Time        PG  GM  GS  S  V  GA \n" );
	
	
	for ( i = 0; i < ntimes; i += 1 ) 
	{
		printf("%-12s %-3s %-3s %-3s %-3s %-3s %-3s", tabela[i][0], tabela[i][1], tabela[i][2], tabela[i][3], tabela[i][4], tabela[i][5], tabela[i][6] );
		printf("\n"); 
	}


}

