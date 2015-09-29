#include <stdio.h>
#define MAX 100
#include "util.h"
int main(int argc,char const *argv[])
{
	int m,n,cont,cont2,i,j,aux=1;
	int A[MAX][MAX];

	printf("Digite a quantidade de linhas da matriz A:\n");
	scanf("%d", &m);
	printf("Digite a quantidade de colunas da matriz A:\n");
	scanf("%d", &n);
	
	for(i=0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	if(teste_permutacao(A,m,n)==1)
	{
		printf("é permutação!");
	}
	else
	{
		printf("não é permutação!");
        }
	return 0;
}
