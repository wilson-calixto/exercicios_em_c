/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 3
 * lista3desafio2.c
 *
 * Equipe:
 *  Sergio Pinheiro
 *  Delrick Oliveira
 *  Jackson Kevin
 *  Manoel Victor
 *  Gabriel Faraco
 *  Raí Santos
 *      
 */


#include <stdio.h>
#include "../../util.c/util.h"

int main (int argc, const char *charv[])
{
    int x, y, z;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &x);

    printf("\nDigite o segundo numero: ");
    scanf("%d", &y);

    z = mdc(x,y);
    printf("\nO mdc e: %d\n", z);

    return 0;
}
