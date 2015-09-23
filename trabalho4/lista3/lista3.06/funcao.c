#include <stdio.h>
#include <stdlib.h>


void matriz(int **matriz, int M, int N)
{
	int i, j, qtd_lin=0, qtd_col=0, cont;
	for (i=0; i<M; i++) 
        {
                cont = 0;
                for (j=0; j<N; j++)
                        if (matriz[i][j] != 0)
                                cont++;
                if (cont == 0)
                        qtd_lin++;
        }
        printf("%d linhas nulas\n", qtd_lin);

	for (j=0; j<N; j++) 
        {
                cont = 0;
                for (i=0; i<M; i++)
                        if (matriz[i][j] != 0)
                                cont++;
                if (cont == 0)
                        qtd_col++;
        }
        printf("%d colunas nulas\n", qtd_col);
}
