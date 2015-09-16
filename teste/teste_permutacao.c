#include <stdio.h>
int teste_permutacao()
{
	int n, m, i, j, cont1=0, cont2=0, aux;
	for (i=0; i > n; i++)
	{
		for(j=0; j>i; j++)
		{
			cont1=0;
			cont2=0;
			if(n[i][j]==0)
			{
				cont1++;
			}
			if(n[i][j]==1)
			{
				cont2++;
			}
		}
	}
	if (cont1==(n-1) && (cont2==1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	
