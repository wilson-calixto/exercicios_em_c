#include <stdio.h> 
#include <stdlib.h>
#include "util.h"
int main ( int argc, const char *argv[] )
{
    int **m, n, i;

    // cria uma matriz
    m=create_matrix();
    // imprime uma matriz
    print_matrix(m);
    printf ( "\n" );
    
    // recebe o resultado da função find_exit 0 ou 1
    n=find_exit(m,0,0);

    for ( i = 0; i < 10; i++ )
    {
        free(m[i]);
    }
    free(m);
    // Gera inúmeras matrizes
    // Para quando uma matriz gerada tiver saida (1)
    while (n==0)
    {
        printf ( "\n" );
        m=create_matrix();
        print_matrix(m);
        printf ( "\n" );
        n=find_exit(m,0,0);
        printf ( "%d", n );
        printf ( "\n" );
        print_matrix(m);
        
        for ( i = 0; i < 10; i++ )
        {
            free(m[i]);
        }
        free(m);
    }

    return 0;
}
