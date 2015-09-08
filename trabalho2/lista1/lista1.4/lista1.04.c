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
#include "../../util.c/util.h" 
//programa para verificar se um numero digitado é positivo ou negativo
int main(int argc, const char *argv[])
{
    int number;
    printf ( "digite um numero:\n" );
    scanf ( "%d", &number);

    if (is_positive(number))//aqui eu chamo a função que verifica se o numero é positivo ou negativo
    {
        printf ( "'P'\n" );
    }
    
    else
    {
        printf ( "'N'\n" );
    }
    return 0;
}
