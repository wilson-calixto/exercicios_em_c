/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista3.7.c
*
* Equipe
*  Juliany Raiol
*  Lucas Botinelly
*  Luiz Fernando
*  Richardson  
*/

#include <stdio.h>
#include "magico.h"
#define MAX 1000

int main()
{
	int i, j, n;
	int matriz[MAX][MAX];
	
	//Recebe a ordem da matriz
	printf("Digite o tamanho da matriz: ");
	scanf("%d",&n);
	
	//Lê os elementos para a matriz
	printf("Digite os elementos da matriz\n");
	read_m(n,matriz);
	
	//Verifica se é uma quadrado mágico
	if(qmagico(n, matriz))
	{
		printf("A matriz é um quadrado mágico\n");
	}
	else printf("A matriz não é quadrado mágico\n");
	
	return 0;
}