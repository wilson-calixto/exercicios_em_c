#include <stdio.h>
#include <stdlib.h>
#include "util.h"
int main()
{

	int tam=0, reverse=0, i=0;	
	int n[tam];

	printf("Tamanho da sequencia: ");
	scanf("%d",&tam);
	printf("Digite a sequencia correspondente ao tamanho anterior: ");
	for (i = 0; i < tam; i++)
	{
		scanf("%d",&n[i]);
	}
	printf("\n\n");
	reverse = inverso(*n,tam);

	printf("Numero inverso: %d",reverse);

	printf("\n\n\n");

	return 0;
}
