#include <stdio.h>
#include "../../util.c/util.h"
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
	
	for(i=0;i<n;i++)
	{
		for(j = 0; j < m;j++)
		{
			resultado = a[i][j]*x[i];
			if( resultado == b[j] )
			{
				printf("Para o valor %f de A e %f de B, %f de X satisfaz o problema.\n",a[i][j],b[j],x[i]);
			}
			else printf("Para o valor %f de A e %f de B, não %f de X satisfaz o problema.\n",a[i][j],b[j],x[i]);
			
		}
	}
			
	return 0;
}
