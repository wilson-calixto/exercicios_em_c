#include <stdio.h>


int um_sobre_n(int n)
{
    int i;
    float soma=0;

    for(i=1;i<=n;i++)
    {
        soma=soma+(1/i);
    }
    return soma;
}
