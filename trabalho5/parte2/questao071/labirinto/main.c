#include <stdio.h> 
#include <stdlib.h>
#include "util.h"
int main ( int argc, const char *argv[] )
{
    int **m, n, i;
    n=0;

    printf ( "Gerando Matriz valida aguarde!\n" );

    // Gera inúmeras matrizes
    // Para quando uma matriz gerada tiver saida (1)
    // pode ocorrer falha de seguimentação
    while (n==0)
    {
        printf ( "============================\n" );
        m=create_matrix();
        printf ( "antes de entrar na função:\n" );
        print_matrix(m);
        printf ( "\n" );
        n=find_exit(m,0,0);
        printf ( "depois de passar pela função:\n" );
        print_matrix(m);
        printf ( "\n" );
        printf ( "%d\n", n );
        //printf ( "\n" );
        //print_matrix(m);
        
        for ( i = 0; i < 10; i++ )
        {
            free(m[i]);
            m[i]=NULL;
        }
        free(m);
        m=NULL;
    }

    return 0;
}
