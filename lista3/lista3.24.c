/*
Programacao de computadores e Algoritmos
Trabalho 1
Questao 3.24

Equipe:
	Paulo Marinho
	Sergio Pinheiro	
	Wilson Calixto
	Andressa Moreira
	Rodrigo Oliveira
*/

#include <stdio.h>

int main (int argc, const char argv[])
{
	int cont = 0, i;
	float n[50], media = 0.0;

	do
	{
		printf("\nDigite a nota (-1 para terminar): ");
		scanf("%f", &n[cont]);
		cont++;

	} while (n[cont-1] > 0);

	cont--;

	for (i = 0; i < cont; i++)
	{
		media = media + n[i];
	}
	media = media / cont;

	printf("\n\nMedia: %f\n\n", media);

	return 0;
}
