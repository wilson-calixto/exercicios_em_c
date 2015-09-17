#include<stdlib.h>
#include<stdio.h>



void ordenar_vet(float *vetor,int loops)
{
	int i,j;
	float temp;
		
	for(i=0;i<loops;i++)
	{
		for(j=0;j<loops;j++)
		{
			if(vetor[j]>=vetor[i])
			{					
				temp=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=temp;
			}		
		}	
	}		
}

float qnt_ap(float *vetor,int loops,float procurado)
{

		int i, c = 0;
		for(i=0;i<loops;i++)
		{
			if(procurado==vetor[i])
			{
				c++;
			
			}	
		
		}
	return c;	
}