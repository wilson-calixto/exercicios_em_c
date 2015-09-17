#include <stdio.h>
#include <stdlib.h>

float **read_matrix(int m, int n)
{
    float **v;  //ponteiro para matriz
    int i, j;      //variavel auxiliar

    if (m<1 || n<1) //verifica parametros recebidos
    {
        printf ( "<<< Erro: Parametro invalidos >>>\n" );
        return (NULL);
    }
    
    //aloca linhas da matriz
    v= (float **) malloc (m * sizeof(float *));
    
    //aloca colunas da matriz    
    for ( i = 0; i < m; i++ )
    {
        v[i]= (float *) malloc (n * sizeof(float));

        for ( j = 0; j < n; j++ )
        {
            scanf ( "%f", &v[i][j] );
        }

    }
    
    return (v); // retorna o ponteiro para a matriz
}


