/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 *
 * Equipe:
 *
 *          Jackson Kelvin
 *          Sergio Alexandre
 *          Grabriel Faraco
 *          Manoel Florencio
 *          Rai Santos
 *          Delrick Oliveira 
 */

#include <stdio.h> 
#include "funcao.h"
//faz converão de temperatura de celsius para farenheit e farenheit/celsius.
int main ( int argc, const char *argv[] )
{
    int type;
    float number;
    printf ( "escolha entre 1-celsius e 2-farenheit: \n" );
    scanf ( "%d", &type );
    switch (type)
    {
        case 1:
            printf("temperatura:\n");
            scanf ( "%.2f", &number );
            celsius(number);
            break;

        case 2:
            printf("temperatura:\n");
            scanf ( "%.2f", &number );
            farenheit(number);
            break;
   }

    return 0;
}
