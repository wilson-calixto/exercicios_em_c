	#include <stdio.h>
	#include "delta.h"

	int main( int argc,const char *argv[])
        {
                int a,b,c,resultado;

                printf("Digite 3 valores para calcular o delta:");  
                scanf("%i %i %i", &a,&b,&c);  // recebe os 3 valores de entrada.

                resultado=delta(a,b,c);   // faz o processamento na funçao

		printf("O resultado de delta é:%d\n", resultado);      //exibe o delta
	}

