#include <stdio.h>
#include <stdlib.h>

int repeat(int m,int n,int matriz[100][100]) 
{
    int cont = 0, a, k, b, i, j=0, termo;

    for(a = 0; a < m; a++)
    {
        for(b = 0; b < n; b++)
        {
            termo = matriz[a][b];
            for(i = a; i < m; i++)
            {
                if(i==a)
                {
                    j=b+1;
                }
                else
                {
                    j=0;
                }
                for(k=0; j < n; j++)
                {
                    if(termo == matriz[i][j])
                    {
                        cont+=1;
                    }

                }    
            
            }            
        }
    }
    if(cont != 0)
        return 1;
    return 0;
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
