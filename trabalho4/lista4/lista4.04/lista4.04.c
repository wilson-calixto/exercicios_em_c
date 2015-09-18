#include <stdio.h>
#include <stdlib.h>
//#include "ff.h"

int main(int argc, const char *argv[])
{
	int m,n,i,j;
	int matriz[5][5];
	
	printf ("\nDigite valor para os elementos da matriz\n\n");
	
	for ( m=0; m < 5; m++)
		for ( n=0; n<5; n++)
		{
			scanf ("%d", &matriz[ m ][ n ]);
		}

	for ( m=0; m < 5; m++)
		for ( n=0; n < 5; n++)
		{
			printf ("\nM[%d][%d] = %d\n", m, n,matriz[ m ][ n ]);
		}
/*
	printf("digite o 1° numero da linha que deseja trocar:\n");
	scanf("%d",i);

	printf("digite o 2° numero da linha que deseja trocar:\n");
	scanf("%d",j);
	
	troca(matriz[m][n]);*/
	return 0;
}
