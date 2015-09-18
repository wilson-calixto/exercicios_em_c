#include <stdio.h>
#include <stdlib.h>
int matriz (int **m)    
{
    int col=3, linha=3, i;
    m = (int**) malloc(linha*sizeof(int*));
    
    for (i=0;i<col;i++)
    {
        m[i]=(int*) malloc(col*sizeof(int));
        printf("informe os valores clounas: \n");
        scanf("%d", &col);
    }
    for (i=0; i<linha; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
