#include <stdio.h>
int teste_permutacao()
{
    int  i, j, cont1=0, cont2=0, aux=1;
    for (i=0; i < n; i++)
    {
        cont1=0;
        cont2=0;
        for(j=0; j<m; j++)
        {
            
            if(M[i][j]==0)
            {
                cont1++;
            }
            if(M[i][j]==1)
            {
                cont2++;
            }
        }
      
    }

    return cont1, cont2;
} 
