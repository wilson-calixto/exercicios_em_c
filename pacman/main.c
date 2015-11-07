#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cont;
int vetor_global[300];
int verifica_posicao(int i, int j)
{
	
	int x;
	for(x = 0; x < 15; x++)
   	{
       		if (i == vetor_global[cont] && j == vetor_global[cont])
       	{
           return 0;
       	}
    }
    return 1;
}

	

void marca_jodada(int i, int j, int vetor_global[300])
{
        vetor_global[cont] = i;               
	vetor_global[cont+1] = j;
}

int main()
{
	int jogada,cont;
	int matriz[15][15];			    
	char mprint[15][15];
	
}


