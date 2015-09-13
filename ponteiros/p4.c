#include<stdio.h>
#include <stdlib.h>

void foo(int x)
{
	int* resultado;
	int i;
	int valor;

	resultado = (int*) ( malloc( sizeof(int) * x ) );

	for (i=0 ; i<x ; i++)
	{
		scanf("%d",&valor);
		resultado[i] = valor * x;
	}

	for (i=0 ; i<x ; i++)
	{
		printf("%d ",resultado[i]);
	}

	printf("fim \n");
	
	free(resultado);

}

int main(int argc, const char *argv[])
{
	foo(3);
	foo(4);
}
