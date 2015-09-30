#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void preencher(int A[MAX][MAX], int m, int n)
{ 
 	int i,j;
 	for (i= 0; i<m;i++)
	{
    		for(j=0;j<n;j++)
		{ 
         		scanf("%d",&A[i][j]);
     		}
  	}
}

int teste_permutacao(int matriz[MAX][MAX],int m,int n)
{
	int  i, j, cont1=0, cont2=0, aux=1;
	for (i=0; i < m; i++)
	{
        	cont1=0;
        	cont2=0;
		for(j=0; j<n; j++)
		{
			if(matriz[i][j]==0)
			{
				cont1++;
			}
			if(matriz[i][j]==1)
			{
				cont2++;
			}
    	  	}
	  	if (cont1!=(n-1) || (cont2!=1))
	    	{
		    	aux=0;
	 	}
   	}
	
	return aux;
}
