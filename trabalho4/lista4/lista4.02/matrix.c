#include <stdio.h>
#include <stdlib.h>

/* Função para leitura de uma matriz de mxn */

float **read_matrix(int m, int n)
{
    int i, j;      //variavel auxiliar
    float **v;     //matriz
    
    //linhas
    v = (float **)malloc(m * sizeof(float*));
    for ( i = 0; i < m; i++ )
    {
        //colunas
        v[i] = (float *) malloc (n * sizeof(float));
        for ( j = 0; j < n; j++ )
        {
            //ler matriz
            scanf ( "%f", &v[i][j] );
        }
    }
    return v; //retorna o ponteiro para a matriz alocada
}

/* Função que imprime uma matriz de mxn */

void print_matrix(float **v, int m, int n)
{   
    int i,j;

    for ( i = 0; i < m; i += 1 )
    {    
        for ( j = 0; j < n; j += 1 )
        {
            printf ( "%.2f \t", v[i][j] );
        }
        printf ( "\n" );
    }
}

/* Função para limpar dados alocados numa matriz mxn */

void clean_matrix(float **v, int m)
{
    int i;

    for ( i = 0; i < m; i++ )
    {
        free(v[i]);
    }
    free (v);
}
