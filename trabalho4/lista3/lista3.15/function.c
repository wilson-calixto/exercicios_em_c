#include <stdio.h>
int teste_permutacao(int matriz[][100],int n,int m)
{
    int  i, j, cont1=0, cont2=0, aux=1;
    for (i=0; i < n; i++)
    {
        cont1=0;
        cont2=0;
        for(j=0; j<m; j++)
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
      
    }

    return cont1, cont2;
} 
