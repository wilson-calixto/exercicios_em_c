	#include <stdio.h>
	#include "delta.h"

	int main( int argc,const char *argv[])
        {
                int a,b,c,resultado;

                printf("Digite 3 valores para calcular o delta:");
                scanf("%i %i %i", &a,&b,&c);

                resultado=delta(a,b,c);

		printf("%d\n", resultado);
	}

