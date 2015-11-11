/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 
 * clyde.c
 *
 * Equipe:
 *      Sergio Pinheiro
 *      Andressa Moreira
 *      Elisabeth castro
 *      Ewerton Petillo
 *      Richardson Souza
 *      Lucas Frota
 */

#include <stdio.h>
#include <math.h>

int main () 
{

}


int distancia (int ghost[3], int pac[3])
{
    int a;
    a = sqrt (((ghost[0]-pac[0])^2) + ((ghost[1]-pac[1])^2));

    return a;
}


