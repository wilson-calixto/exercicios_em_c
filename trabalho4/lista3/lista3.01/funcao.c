#include <stdio.h>
#include <stdlib.h>

int matriz_produto(int matriz, int vetor)
{
	int i,j,matriz,matrizR,vetor,c,x,Aux;
	
	Aux=0;	

	for(i=0; i<a; i++)
	{
        	for(j=0; j<c; j++)
        	{
                	matrizR[i][j]=0;
		
			for(x=0; x<1; x++)
                	{
                		Aux += matriz[i][x] * vetor[x][j];
                	}
                	matrizR[i][j]=Aux;
                	Aux=0;
                }
	}
	return matrizR;
}
