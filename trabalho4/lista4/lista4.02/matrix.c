#include <stdio.h>
#include <stdlib.h>

float **read_matrix(int m, int n)
{
    int i, j;      //variavel auxiliar
    float **v;

    v = (float **)malloc(m * sizeof(float*));
    for ( i = 0; i < m; i++ )
    {
        v[i] = (float *) malloc (n * sizeof(float));
        for ( j = 0; j < n; j++ )
        {
            scanf ( "%f", &v[i][j] );
        }
    }
    return v;
}

void print_matrix(float **v, int m, int n)
{   
    int i,j;

    for ( i = 0; i < m; i += 1 )
    {    
        for ( j = 0; j < n; j += 1 )
        {
            printf ( "%.2f \t\n", v[i][j] );
        }
        printf ( "\n" );
    }
}

void clean_matrix(float **v, int n)
{
    int i;

    for ( i = 0; i < n; i++ )
    {
        free(v[i]);
    }
    free (v);
}
