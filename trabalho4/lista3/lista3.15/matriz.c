#include <stdio.h>
#include <stdlib.h>

int matriz (int **m)    
{
    int col, linha, i;
    
    printf("informe a ordem da matriz: \n");
    scanf("%d", &linha);

    m = (int**) malloc(linha*sizeof(int*));

    
    
    for (i=0;i<linha;i++)
    {
        printf("informe os valores colunas: \n");
        scanf("%d", &col);
        m[i]=(int*) malloc(col*sizeof(int));
    }
    for (i=0; i<linha; i++)
    {
        printf("%d ", m[linha][i]);
        
    }
    
    printf("\n");
    free(m);
    
    return 0;
}
