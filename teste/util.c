#include <stdio.h>

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
/* funcao recebe dois vetores,o numero de loops (len do vetor) e calcula seu produto */


void produto_escalar(int *vetor1,int *vetor2,int loops)
{   
    int i,produto;   
    for (i=0;i<loops ;i++ )
    {
        produto=vetor1[i]*vetor2[i];

        printf ( "O produto de x[%d] por y[%d] e : %d \n",i+1,i+1,produto );   
    }
   
}

//-------------------------------------------------------------------------------
int inverso(int *vetor, int s)
{
    int i=0;
    for (i=s-1;i>=0;i--)
    {
        
    }

    return vetor;
}

//fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
int teste_permutacao(int matriz[][],int n,int m)
{
	int  i, j, cont1=0, cont2=0, aux=1;
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
		}
	}
	if (cont1!=(n-1) && (cont2!=1))
	{
		aux=0;
	}
	
        return aux;
	}
