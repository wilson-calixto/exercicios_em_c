/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * |lista 2.05|
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

int main(int argc, const char *argv[])//funcao principal
{
    int seconds, hours, minutes, aux1, aux2, sec;

    printf("Insira os segundos: \n");
    scanf("%d", &seconds);

    hours = sec_hours(seconds); //chamada da funcao de conversao seg ---> horas
    aux1 = seconds - (hours*3600);
    minutes = sec_minutes(aux1); //chamada da funcao de conversao seg ---> minutos
    aux2 = ((hours*3600)+(minutes*60));
    sec = subtraction(seconds, aux2);

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos \n", seconds, hours, minutes, sec);

    return 0;
}
