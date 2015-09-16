#include <stdio.h>
#include <stdlib.h>

int produto_escalar(int n, int v1[n], int v2[n])
{
	int cont, acm = 0; //contador, acumulador;


	for(cont = 0; cont < n; cont++)
		acm += v1[cont] * v2[cont]; //acm acumula o produto escalar dos vetores

	return acm;
}

void read_array(int n, int v[n])
{
	int cont; //contador

	for(cont = 0; cont < n; cont++)
	{
		printf("Informe o %dº valor do vetor: ",cont + 1);
		scanf("%d", &v[cont]); //lê um valor para o vetor
	}
		
}
