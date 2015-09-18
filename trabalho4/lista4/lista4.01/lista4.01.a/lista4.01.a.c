#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, const char *argv[])
{
	int *a, *b, *c, n, cont; //vetores a,b e c, numero de elementos dos vetores a e b, contador para o loop

	puts("Informe o numero de elementos:");
	scanf("%d", &n);

	a = (int *) (malloc(sizeof(int) * n)); //tamanho do vetor 'a' é declarado com o tamanho informado pelo usuario  
	b = (int *) (malloc(sizeof(int) * n)); //tamanho do vetor 'b' é declarado com o tamanho informado pelo usuario
	c = (int *) (malloc(sizeof(int) * taminters(n,a,b)));//tamanho do vetor 'c' é quantidade de interseçoes de a e b

	ler_vetor(n,a); //lê vetor 'a'
	ler_vetor(n,b); //lê vetor 'b'

	inters(n, a, b, c); //gera o vetor interseçao de a e b

    	printf("O vetor interseção é:\n");
	
	for(cont = 0; cont < taminters(n,a,b); cont++) //contador varia de 0 até o tamanho da interseçao(de a e b) - 1
	{
		printf("%d ", c[cont]);
	}

	printf("\nO tamanho do vetor intersecção é: %d\n",taminters(n,a,b));

	return 0;
}
