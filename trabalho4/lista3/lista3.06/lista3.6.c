/*
Programaçao de Computadores e Algoritmos
Trabalho 4
Questão 06 da Lista 3
Grupo:
	Davi Tavares;
	Delrick Oliveira;
	Evandro Fernandes;
	Lucas Frota;
	Manoel Victor;
*/



#include <stdio.h>
#include "funcao.h"

int main(int argc, const char *argv[])
{

	int a,b,i,j,*p;

	printf("Digite o tamanho da matriz:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int matriz[a][b];
	p = &matriz;
	
	printf("Digite os valores da matriz:\n");
	for (i=0; i<a; i++)
	{
		for (j=0;j<b;j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}

	int nulas(matriz);
	printf("%d linhas nulas e %d colunas nulas. \n" ln,cn);		

	return 0;
}
