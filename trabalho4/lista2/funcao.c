#include<stdlib.h>
#include<stdio.h>



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