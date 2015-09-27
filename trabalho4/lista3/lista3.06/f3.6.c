#include <stdio.h>
#include <stdlib.h>


void matriz(int **matriz, int M, int N)
{
	int i, j, qtd_lin=0, qtd_col=0, cont; //i - contador que ira iterar menos, j - contador que ira iterar mais, cont - contador de numeros nao nulos
	for (i=0; i<M; i++)		      //qtd_lin - quantidade de linhas, qtd_col - quantidade de colunas
        {
                cont = 0; //contador de nulas é iniciado com o valor 0
                for (j=0; j<N; j++) 
                        if (matriz[i][j] != 0)
                                cont++; //contador de numeros nao nulos é incrementado
                if (cont == 0)
                        qtd_lin++; //quantidade de linhas nulas é incrementada
        }
        printf("%d linhas nulas\n", qtd_lin); //informa a quantidade de linhas nulas

	for (j=0; j<N; j++) 
        {
                cont = 0; //cont recebe 0
                for (i=0; i<M; i++)
                        if (matriz[i][j] != 0)
                                cont++; // contador de numeros nao nulos é incrementado
                if (cont == 0)
                        qtd_col++; //quantidade de colunas nulas é incrementada
        }
        printf("%d colunas nulas\n", qtd_col); //informa a quantidade de colunas nulas
}
