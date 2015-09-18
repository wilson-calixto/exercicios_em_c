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
#include "../../util.c/util.h"
#define MAX 1000

int main()
{
	int i, j, n;
	int **matriz;
	
	//Recebe a ordem da matriz
	printf("Digite o tamanho da matriz: ");
	scanf("%d",&n);
	
	//Lê os elementos para a matriz
	printf("Digite os elementos da matriz\n");
	insere_matriz(n, n, matriz);
	
	
	for (i=0; i<n;i++)
	    {
		for (j=0; j<n; j++)
		{
		    printf("%d ", matriz[i][j]); 
		}
		printf("\n");
	    }
	
	//Verifica se é uma quadrado mágico
	if(qmagico(n, matriz))
	{
		printf("aqui A matriz é um quadrado mágico\n");
	}
	else printf("A matriz não é quadrado mágico\n");
	
	return 0;
}