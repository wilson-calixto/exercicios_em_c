/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 01 da Lista 3
Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;
*/



#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main(int argc, const char *argv[])

{
	int a,b,c,i,j;

	printf("Digite o tamanho da matriz:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int matriz[a][b];

	printf("Digite os valores da matriz:\n");

	for (i=0; i<a; i++)
	{
		for (j=0;j<b;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}

	printf("Digite o tamanho do vetor:\n");
	scanf("%d",&c);

	int vetor[c][1];

	printf("Digite os valores do vetor:\n");
	
	for(i=0;i<c;i++)
	{	
		scanf("%d",&vetor[i][1]);
	}

	printf("O produto da matriz pelo vetor e: ");
	int matriz_produto(matriz, vetor);

	return 0;
}
