#include <stdio.h>
#include "../../util.c/util.h"
#include "function.h"

#define MAXI 100 //Constante

int main(int argc, char const *argv[])
{
	int i,n, m;
	float x[MAXI], b[MAXI], a[MAXI][MAXI], resultado = 0.0;
	
	//Inserindo o número de linhas e colunas
	printf("Digite os valores de N e M: ");
	scanf("%d%d",&n,&m);
	
	//Leitura do vetor X
	read_array(n, x[n]);
	
	//Leitura do vetor B
	printf("Digite os valores do vetor B: ");
	read_array(m, b[m]);
	
	//Leitura da matriz A
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	test_function(n, m, a[][m], x[n], b[m]);		
	return 0;
}
