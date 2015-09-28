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
#include "fu.h"

int main(int argc, const char *argv[])//funcao principal
{
    int seconds, hours, minutes, aux1, aux2, sec;

    printf("Insira os segundos: \n");
    scanf("%d", &seconds); //insere a quantidade de segundos

    hours = sec_hours(seconds); //chamada da funcao de conversao segundos ---> horas
    aux1 = seconds - (hours*3600); //tira a diferenca entre os segundos iniciais e as horas convertidas em segundos
    minutes = sec_minutes(aux1); //o que sobra da diferenca é chamada na funcao de conversao seg ---> minutos
    aux2 = ((hours*3600)+(minutes*60)); //soma das horas e minutos transformados em segundos
    sec = subtraction(seconds, aux2); //subtracao dos segundos iniciais com as horas e minutos transformados em segundos

    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos \n", seconds, hours, minutes, sec);

    return 0;
}
