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

int main(int arc, char const *argv[])
{
	int i, j, n;
	int **matriz;
	
	//Recebe a ordem da matriz
	printf("Digite o tamanho da matriz: ");
	scanf("%d",&n);
	
	//Lê os elementos para a matriz
	printf("Digite os elementos da matriz\n");
	insere_matriz(n, n, matriz);
	
	//Verifica se é uma quadrado mágico
	if(qmagico(n, matriz))
	{
		printf("A matriz é um quadrado mágico\n");
	}
	else printf("A matriz não é quadrado mágico\n");
	
	return 0;
}