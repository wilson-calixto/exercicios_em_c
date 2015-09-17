#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int permutacao (int mat[MAX][MAX],int l,int c)
{
    int i,j,soma=0,soma1=0,verda = 1;
    for(i=0;i < l;i++)
    {
        soma=0;
        soma1=0;
        for (j=0;j<c;j++)
        {
            if(mat[i][j]==0)
            {
                soma++;
            }
            if(mat[i][j]==1)
            {
                soma1++;
            }
        }
        if(soma!=(c-1) || (soma1!=1))
        {
            verda=0;
        }
    } 
    
    return verda;
    
    
}


