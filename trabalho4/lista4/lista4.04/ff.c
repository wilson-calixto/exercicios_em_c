#include <stdio.h>
#include <stdlib.h>

void change (int *p, int *q)
{
   int temp;
   temp = *p; *p = *q; *q = temp;
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
void troca(int i,int j,int m,int n,int matriz[100][100])
{
	int b;
    for(b = 0;b < n; b++)
       {
                
	  change(&matriz[i][b],&matriz[j][b]);           
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
