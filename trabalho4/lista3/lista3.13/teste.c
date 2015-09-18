#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
	char ***matriz;
	int i,j;
	char palavra[10];

//	palavra = (char *) malloc(4*sizeof(char));

	matriz = (char ***) malloc(2*sizeof(char*));
	
	*matriz = (char **) malloc(2*sizeof(char*)); 
	
	**matriz = (char *) malloc(10*sizeof(char));
	
	
	j = strlen (matriz[0][0]);	
	printf("\n %d \n", j);


	free(matriz);
	return 0;
}





