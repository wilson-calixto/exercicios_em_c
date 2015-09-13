#include<stdio.h>

int main(int argc, const char *argv[])
{
	int matriz[2][2];
	int i, j;
	
	printf ("\nDigite valor para os elementos da matriz\n\n");
	
	for ( i=0; i<2; i++ )
		for ( j=0; j<2; j++ )
		{
			scanf ("%d", &matriz[ i ][ j ]);
		}
	
	for ( i=0; i<2; i++ )
		for ( j=0; j<2; j++ )
		{
			printf ("\nM[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
		}

	return 0;
}
