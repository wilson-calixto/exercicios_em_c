#include <stdio.h>

void retangulo(int linhas, int colunas)
{
	int i,j;
	for(i=0;i<linhas;i++)
	{
		printf("|");
		for(j=0;j<colunas;j++)
		{	
			printf("+");
		}
		printf("|");
		printf("\n");
	}
}
