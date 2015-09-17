#include <stdio.h>
#define MAXI 100 //Constante

int main(int argc, char const *argv[])
{
	int i,n, m;
	int x[MAXI], b[MAXI], a[MAXI][MAXI];
	
	//Inserindo o número de linhas e colunas
	printf("Digite os valores de N e M: ");
	scanf("%d%d",&n,&m);
	
	//Leitura do vetor X
	printf("Digite os valores do vetor X: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	//Leitura do vetor B
	printf("Digite os valores do vetor B: ");
	for(i=0;i<b;i++)
	{
		scanf("%d",&b[i]);
	}
	
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