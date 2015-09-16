#include <stdio.h> 
#include <stdlib.h>

float read_matrix ()
{
    int l=3, c=4; //3 linhas 4 colunas
    
    int i,j;
    float count, **matrix = (float *)malloc(i * j * sizeof(float));

    count = 0.0;

    for ( i = 0; i < l; i += 1 )
    {
        
        for ( j = 0; j < c; j += 1 )
        {
            *(matrix + i*c + j) = ++count;
        }

    }

    for ( i = 0; i < l; i += 1 )
    {

        for ( j = 0; j < c; j += 1 )
        {
            printf ( "%f ", *(matrix + i*c +j) );
        }

    }
   
}
