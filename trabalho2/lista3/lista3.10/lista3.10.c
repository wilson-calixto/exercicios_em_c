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
    int temperature;
    float number;
    printf ( "digite 1 para converter de farenheit para celsius e 2 para converter de celsius para farenheit:\n" );
    scanf ( "%d", &temperature );
    switch (temperature)
    {
        case 1:
            printf("temperatura F°:\n");
            scanf ( "%f", &number );
            celsius(number);
            break;

        case 2:
            printf("temperatura C°:\n");
            scanf ( "%f", &number );
            farenheit(number);
            break;
   }

    return 0;
}
