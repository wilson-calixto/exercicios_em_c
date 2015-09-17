#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, const char *argv[])
{
	int *a, *b, *c, n, cont;

	puts("Informe o numero de elementos:");
	scanf("%d", &n);

	a = (int *) (malloc(sizeof(int) * n));
	b = (int *) (malloc(sizeof(int) * n));
	c = (int *) (malloc(sizeof(int) * taminters(n,a,b)));

	ler_vetor(n,a);
	ler_vetor(n,b); 

	inters(n, a, b, c);

    printf("O vetor interseção é:\n");
	for(cont = 0; cont < taminters(n,a,b); cont++)
	{
		printf("%d ", c[cont]);
	}

	printf("\nO tamanho do vetor intersecção é: %d\n",taminters(n,a,b));

	return 0;
}
