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
#include "matrix.h"

int main ( int argc, const char *argv[] )
{
    int m,n;
    float **p;

    printf ( "Informe as dimensoes da matriz: \n" );
    scanf ( "%d %d", &m, &n );
    
    printf ( "Entre com os valores da matriz: \n" );
    p=read_matrix(m,n);

    print_matrix(p,m,n);

    clean_matrix(p,m);

    return 0;
}
