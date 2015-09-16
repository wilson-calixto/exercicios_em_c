#include "matriz_transposta.h"
#include <stdio.h>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
	int nlinha,ncoluna,i,j;
	int **matriz;
	printf ( "Digite a quantidade de linhas\n" );
	scanf ( "%d", &nlinha );
	printf ( "Digite a quantidade de colunas\n" );
	scanf ( "%d", &ncoluna );
	matriz = malloc (nlinha*sizeof(int * ));
	 	
	for ( i = 0; i < nlinha; i += 1 ) 
	{
		matriz[i] = (int*) malloc (ncoluna*sizeof(int));
		
		for ( j = 0; j < ncoluna; j += 1 ) 
		{
			printf("Digite o valor da linha %d coluna %d",i+1,j+1);
			scanf ( "%d", &matriz[i][j]);
		}
	}
	

	//matriz_transposta(nvalores, pvetor);

	return 0;
}				/* ----------  end of function main  ---------- */
