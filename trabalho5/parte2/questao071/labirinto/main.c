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

    // imprime o resultado de n
    printf ( "%d\n", n );
    
    return 0;
}
