#include <stdio.h>
#include "../../util.c/util.h"
#define MAXI 100 //Constante

int main(int argc, char const *argv[])
{
	int i,n, m;
	int x[MAXI], b[MAXI], a[MAXI][MAXI];
	
	//Inserindo o número de linhas e colunas
	printf("Digite os valores de N e M: ");
	scanf("%d%d",&n,&m);
	
	//Leitura do vetor X
	read_array(n, x[n]);
	
	//Leitura do vetor B
	printf("Digite os valores do vetor B: ");
	read_array(m, b[m]);
	
	//Leitura da matriz
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d%d",&a[i][j]);
		}
	}
			
	return 0;
}