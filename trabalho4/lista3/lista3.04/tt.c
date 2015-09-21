#include <stdio.h>
#include <stdlib.h>

int repeat(int m,int n,int matriz[100][100]) 
{
    int repeat = 0, i, j, k, l;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            for(k = 0; k < m; k++)
            {
                   if((matriz[i][j]  == matriz[i][k] )  && (j != k)) //Varia os elementos da linha
                    {						                      
                        repeat = 1;
                    }
                   
                if((matriz[j][i]  == matriz[k][i])  && (j != k))//Varia os elementos da coluna
                {						                      
                        repeat = 1;
                }
                
            }   
        }
    }

    return repeat;
}
/*-------------------------------------------------------------*/
void maker_matriz(int m,int n,int matriz[100][100])
{
    int i, j;

    printf("preencha a matriz com valores numericos: \n");
    
    for(i = 0; i < m; i++)
    {
        for(j = 0;j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
    	}
    }
}
/*-------------------------------------------------------------*/
void print(int m,int n,int matriz[100][100])
{
	int l,c;
	for (l = 0; l < m; ++l)
	{
		for (c = 0;c < n; ++c)
		{
			printf("\t%d ",matriz[l][c]);
		}
		printf("\n");
	}
}
