#include <stdio.h>

void preencher( float **matriz , int m, int n ) 
{
	int i, j;

	for( i = 0; i < m; i++ )
        {
        	for( j = 0; j < n; j++ )
                {
                        matriz[i][j] = 0.0;      /* Inicializando elementos da matriz com 0.0 */

                }
        }
}

void print( float **matriz , int m, int n ) 
{
	int i, j;

	for( i = 0; i < m; i++ )
        {
        	for( j = 0; j < n; j++ )
                {
                        printf("%f ",matriz[i][j]);      /* Imprimindo os elementos da matriz*/

                }
                printf("\n");
        }
}
