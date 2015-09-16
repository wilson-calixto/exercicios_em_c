/*
 * Programacao de Computadores e aLgoritmos
 * Trabalho 1
 * lista3.04.c
 *
 * Equipe:
 *
 *          Delrick (head)
 *          Evandro (makefile do grupo)
 *          Manoel (Programador)
 *          Lucas Frota 
 *          Davi 
 */

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main(int argc, const char *argv[])
{
    int a[100][100], m, n;

    printf("Informe o valor de m: ");
    scanf("%d", &m);
    printf("Informe o valor de n: ");
    scanf("%d", &n);

    read_matrix(m, n, a);

    if(verifica(m, n, a))
    {
        printf("Existe elementos repetidos.\n");
    }
    else
    {
        printf("Nao existe elementos repetidos.\n");
    }
    
    return 0;
}
