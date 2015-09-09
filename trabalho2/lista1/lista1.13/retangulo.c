#include <stdio.h>

void retangulo(int linhas, int colunas)
{
	int i,j;
	for(i=0;i<linhas;i++)
	{
		for(j=0;j<colunas;j++)
		{
			if(j == 0 || j == colunas-1) printf("|");
			else printf("+");
		}
		printf("\n");
	}
}
