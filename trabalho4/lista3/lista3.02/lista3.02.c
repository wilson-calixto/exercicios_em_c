/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista1.4.c
*
* Equipe
*  Juliany Raiol
*  Lucas Botinelly
*  Luiz Fernando
*  Richardson  
*/
#include <stdio.h>
#include "../../util.c/util.h"
#include "equacao.h"

#define MAXI 100 //Constante

int main(int argc, char const *argv[])
{
	//Declaração de variáveis
	int i,j,n, m;
	int x[MAXI], b[MAXI], a[MAXI][MAXI], resultado = 0.0;
	
	//Inserindo o número de linhas e colunas
	printf("Digite os valores de N e M: ");
	scanf("%d%d",&n,&m);
	printf("\n");
	
	//Leitura do vetor X
	printf("Digite os valores do vetor X\n");
	read_array(n, x);
	printf("\n");
	
	//Leitura do vetor B
	printf("Digite os valores do vetor B\n");
	read_array(m, b);
	printf("\n");
	
	printf("Digite os valores da matriz A\n");
	//Leitura da matriz A
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Digite um valor para %dº linha e %dº coluna da matriz: ",i + 1,j + 1);
			scanf("%d",&a[i][j]);
		}
	}
	//Verifica se o resultado é verdadeiro ou não
	if(test_function(n, m, a, x, b)) printf("\nO vetor X é solução\n");
	else printf("\nO vetor X não é solução\n");
	return 0;
}
