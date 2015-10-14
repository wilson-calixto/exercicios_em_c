/*
 *  *  Programação de Computadores e Algoritmos
 *     Trabalho 5
 *     Questão 4.06.2 
 *     Equipe:   
 *     Benjamin Borges
 *     Jackson Gomes
 *     Richardson Souza
 *     Luiz Brandão
 *     Wilson Calixto
 */

#include <stdio.h>
#include <stdlib.h>
#include "sf_extend.h"

int main ( int argc, const char *argv[] )
{
    int i, cont;
    char s[100], t[100];
    i=0;
    cont=0;

    scanf ( "%s %s",s,t );
    
    while (t[i]!='\0')
    {
        if (sf_extend(s,t)==1)
        {
            cont=cont+1;
        }

        i++;
    }

    printf ( "%d\n", cont );
    
    return 0;
}
