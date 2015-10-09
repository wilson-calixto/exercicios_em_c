#include <stdio.h> 
#include <stdlib.h>
#include "util.h"
int main ( int argc, const char *argv[] )
{
    int **m, n, i;

    m=create_matrix();
    print_matrix(m);
    printf ( "\n" );

    n=find_exit(m,0,0);
    
    while (n==0)
    {
        for (i = 0; i<10; i++)
        {
            free(m[i]);
        }
        free (m);

        m=create_matrix();
        print_matrix(m);
        n=find_exit(m,0,0);
        printf ( "\n" );
        printf ( "%d\n", n );
    }

    //print_matrix(m);
 
    for ( i = 0; i < 10; i++ )
    {
        free(m[i]);
    }
    free(m);
    
    return 0;
}
