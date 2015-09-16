#include <stdio.h>
#include <stdlib.h>
#include "util.h"
int main()
{

	int tam=0, reverse=0, i=0;	
	int n[tam];
	
	printf("Tamanho da sequencia: ");
	scanf("%d",&tam);
	printf("Digite os numeros separadamente: \n");
	for (i = 0; i < tam; i++)
	{
		scanf("%d",&n[i]);
	}
	printf("Numero inverso:");
	printf("\n");
	inverso(n,tam);
	printf("\n");

	return 0;
}
