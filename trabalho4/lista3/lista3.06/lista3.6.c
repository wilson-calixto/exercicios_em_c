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

	int a,b,i,j,*p; //declaracao das variaveis, incluindo o ponteiro

	printf("Digite o tamanho da matriz:\n");
	scanf("%d",&a); //recebe o numero de linhas da matriz
	scanf("%d",&b); //recebe o numero de colunas da matriz
	
	int matriz[a][b]; //declara a matriz com o tamanho fornecido pelo usuario
	*p = &matriz; //ponteiro aponta para o endereco da matriz
	
	printf("Digite os valores da matriz:\n");
	for (i=0; i<a; i++)
	{
		for (j=0;j<b;j++)
		{
			scanf("%d",&matriz[i][j]); //recebe os valores da matriz
		}
	}

	nulas(matriz); //chamada da funcao "nulas"
	printf("%d linhas nulas e %d colunas nulas. \n" ln,cn);		

	return 0;
}
