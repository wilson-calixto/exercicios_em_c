#include <stdio.h> 
#include "sets_ab.h"

int main ( int argc, const char *argv[] )
{
    int n,m,*p,*q,result;

    printf ( "Informe o numero de elementos de A: \n" );
    scanf ( "%d", &n );
    printf ( "Informe os elementos: \n" );
    p=set_a(n);

    printf ( "Informe o numero de elementos de B: \n" );
    scanf ( "%d", &m );
    q=set_b(m);
    
    result = a_contains_b(p,n,q,m);

    if (result==1)
    {
        printf ( "A esta contido em B\n" );
    }
    else
    {
        printf ( "Nao esta contido\n" );
    }

    result= ab_equals_ba(p,n,q,m);

    if (result==1)
    {
        printf ( "A=B\n" );
    }
    else
    {
        printf ( "A!=B\n" );
    }
    
    return 0;
}
