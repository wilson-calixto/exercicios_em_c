#include <stdio.h>
#include <stdlib.h>



int main ( int argc, char *argv[] )
{
	char ***matriz;
	int i,j;

	matriz = (char ***) malloc(sizeof(char*));
	matriz[0] = (char **) malloc(sizeof(char*)); 
	matriz[0][0] = (char *) malloc(4*sizeof(char));
	matriz[0][0] = "teste";
	printf("%s\n", matriz[0][0]);
	free(matriz);
	return 0;
}





