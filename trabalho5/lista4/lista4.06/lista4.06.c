#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main ( int argc, const char *argv[] )
{
    char s[100], t[100];
    int i=0, len, lens, lent, result;

    result=1;
    
    fflush(stdin);

    scanf ( "%s %s", s,t );
    //scanf ( "%s", t );
    
    lens = strlen(s);
    lent = strlen(t);
    len = (lent-lens);

    //printf ( "%d\n", len );

    while( s[i] != '\0')
    {
        if (s[i] != t[len])
        {
            printf ( "%d:%c = %d:%c\n",i,s[i],len,t[len] );
            result = 0;
            break;
        }
        i=i+1;
        len=len+1;   
    }

    printf ( "%d\n", result );

    return 0;
}
