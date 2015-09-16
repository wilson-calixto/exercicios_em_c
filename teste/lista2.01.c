#include <stdio.h>
#include <stdlib.h>
#include "util.h"
int main()
{

	int tam=0,n=0, reverse=0;	
	printf("Tamanho da sequencia: ");
	scanf("%d",&tam);
	printf("Digite a sequencia correspondente ao tamanho anterior: ");
	scanf("%d",&n);
	printf("\n\n");
	reverse = inverso(n,tam);

	printf("Numero inverso: ",reverse);

	printf("\n\n\n");

	return 0;
}
