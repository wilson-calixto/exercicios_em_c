#include <stdio>

void select_sort(int *x)
{
	int i, j, aux;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			if (x[i]<x[j])
			{
				aux=x[i];
				x[i]=x[j];
				x[j]=aux;				
			}
		}
	}
		
}
