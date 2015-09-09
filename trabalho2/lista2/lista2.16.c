#include <stdio.h>

int fatorial(int n)
{
    int aux=0,fat=1;                
    for(aux=n;aux>=1;aux--)         
    {
        fat*=aux;           //fatorial vai se multiplicando pelo aux que vai decrementando
    }
    return fat;
}
