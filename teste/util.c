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
#include <stdio.h>

void produto_escalar(int *vetor1,int *vetor2,int loops)
{   
    int i,produto;   
    for (i=0;i<loops ;i++ )
    {
        produto=vetor1[i]*vetor2[i];

        printf ( "O produto de x[%d] por y[%d] e : %d \n",i+1,i+1,produto );   
    }
   
}


int inverso(int s, int vetor[s])
{
    int i=0;
    for (i=s-1;i>=0;i--)
    {
        
    }

    return &vetor;
}
