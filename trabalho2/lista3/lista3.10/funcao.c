#include <stdio.h>

void celsius (float x)
{
    float c;
    c = ( 5*(x-32)/9 );
    printf ( "%f\n",c);
}

void farenheit (float x)
{
    float f;
    f = ( 9*x/5 ) + 32;
    printf ( "%f\n",f);
}
