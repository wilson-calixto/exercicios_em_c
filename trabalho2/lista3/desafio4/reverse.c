#include <stdio.h>
#include "reverse.h"

int reverse(int n)
{
    int i, j, r, result, div;
    for(i=10; n/i>=1; i=i*10)
    {
        div=i;
    }
    for(j=div; j>=1; j=j/10)
    {
        r=n%j;
        result = result+((n/j)*(div/j));
        n=r;
    }
    return n;
}
