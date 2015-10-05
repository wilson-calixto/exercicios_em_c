/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 5
 * trabalho5.2.02.c
 *
 * Equipe:
 *
 *          Manoel Victor
 *          Paulo Marinho
 *          Wilson Neto
 */

#include <stdio.h>
#include <stdlib.h>
#include "Permutacao.h"

int main()
{
    int *n, num, i;

    puts("Informe a quantidade de numeros:");
    scanf("%d", &num);

    n = malloc(sizeof(int) * num);

    puts("Informe o valores:");
    LerVetor(n, num);

    ListP(n, num);   

    return 0;
}
