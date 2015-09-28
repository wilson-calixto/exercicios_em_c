#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "sf_extend.h"

int main ( int argc, const char *argv[] )
{
    char s[100], t[100];
    int result;

    scanf ( "%s %s",s,t);

    result=sf_extend(s,t);
    
    if (result == 1)
    {
        printf ( "S é seguimento de T\n" );
    }
    else
    {
        printf ( "S nao é segmento de T\n" );
    }

    return 0;
}
