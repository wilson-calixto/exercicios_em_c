	#include <stdio.h>
	#define MAX 100

	int main(argc,const char *argc[])
	{
		int m,n,cont,cont2,i,j,aux=1;
		float A[MAX][MAX];

		printf("Digite a quantidade de linhas da matriz A:\n");
		scanf("%d", &m);
		printf("Digite a quantidade de colunas da matriz A:\n");
		scanf("%d", &n);
		
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				scanf("%f", &A[i][j]);
			}
		}

