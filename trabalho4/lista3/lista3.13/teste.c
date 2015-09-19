#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
	char ***matriz;
	int i,j;
	char palavra[10];
	char palavra2[10];
	char palavra3[3];


//	palavra = (char *) malloc(4*sizeof(char));

	matriz = (char ***) malloc(2*sizeof(char*));
	
	*matriz = (char **) malloc(2*sizeof(char*)); 
	
	**matriz = (char *) malloc(10*sizeof(char));
	
	//scanf("%s",  palavra);	
	//scanf("%s",  palavra2);	
	palavra = "3";
	palavra2 = "2";
	
        j = atoi(palavra) + atoi(palavra2);
	snprintf(palavra3,10,"%d",j);
	printf("%s\n", palavra3 );
	free(matriz);
	return 0;
}





