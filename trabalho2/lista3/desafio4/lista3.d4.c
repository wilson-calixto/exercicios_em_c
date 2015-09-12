/* Programação
 * *
 * *Trabalho 2
 * *lista 3
 * *Desafio 4
 * *
 * *Equipe: Paulo Marinho
 * *     Evandro Fernandes      
 * *     Robson
 * *     Jessica
 * *     Jackson Gomes
 * *     
 * *
 * */





#include <stdio.h>
#include "util.h"

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
int main (int argc, const char *argv[])
{
    reverse(123);
    return 0;
}
