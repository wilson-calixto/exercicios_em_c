#include <stdio.h>
//faz converão de temperatura de celsius para farenheit e farenheit/celsius.
void celsius (float x)
{
    float c;
    c = ( 5*(x-32)/9 );
    printf ( "%.2f\n",c);//resultado em celsius 
}

void farenheit (float x)
{
    float f;
    f = ( 9*x/5 ) + 32;
    printf ( "%.2f\n",f);//resultado em Farenheit
}
