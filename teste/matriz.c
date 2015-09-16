#include <stdio.h>
#include <stdlib.h>

int le_matriz(int mat[][100], int n, int m )
{ 
  int i,j;
  for (i= 0; i<n;i++)
  {
    for(j=0;j<m;j++)
     { 
         scanf("%d",&mat[i][j]);
     
     }
 }
 
}


int teste_permutacao(int matriz[][100],int n,int m)
{
	int  i, j, cont1, cont2, aux=1;
	for (i=0; i < n; i++)
	{
		
		for(j=0; j<m; j++)
		{
			cont1=0;
			cont2=0;
			
			if(matriz[i][j]==0)
			{
				cont1++;
			}
			if(matriz[i][j]==1)
			{
				cont2++;
			}
			if(cont1!=(n-1)||cont2!=1){ 
			aux=0;
			break;
			}
		}
	}
	/*if (cont1!=(n-1) || (cont2!=1))
	{
		aux=0;
	}*/
	
        return aux;
	}
