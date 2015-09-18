/*
 *  Programacao de Computadores e ALgoritmos
 *  Trabalho 4
 *  lista4.02
 * 
 *  Equipe:
 *   Juliany Raiol
 *   Lucas Botinelly
 *   Luiz Brandão
 *   Richardson Souza
 */

#include <stdio.h> 
#include "sets_ab.h"

int main ( int argc, const char *argv[] )
{
    int n,m,*p,*q,result;
    
    printf ( "Informe o numero de elementos de A: \n" );
    // le a quatidade que A tera de n elementos
    scanf ( "%d", &n );
    printf ( "Informe os elementos de A: \n" );
    // chama a funcao para preencher o vetor e p aponta
    p=set_a(n);

    printf ( "Informe o numero de elementos de B: \n" );
    // le a quantidade que B tera de m elementos
    scanf ( "%d", &m );
    printf ( "Informe os elementos de B: \n" );
    // chama a funcao para preencher o vetor e q aponta 
    q=set_b(m);
    
    // recebe o resultado 1 ou 0
    result = a_contains_b(p,n,q,m);

    if (result==1)
    {
        printf ( "A esta contido em B\n" );
    }
    else
    {
        printf ( "Nao esta contido\n" );
    }
    
    // recebe o resultado 1 ou 0
    result = ab_equals_ba(p,n,q,m);

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
