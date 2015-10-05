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
    int *n, num, i; //vetor do conjunto, num - numero de elementos, i - contador

    puts("Informe a quantidade de numeros:");
    scanf("%d", &num); //recebe o numero de elementos

    n = malloc(sizeof(int) * num); //aloca 'num' endereços de memoria para o vetor 'n'

    puts("Informe o valores:");
    LerVetor(n, num); //lê os valores para o vetor 'n'

    ListP(n, num); //lista as permutaçoes do vetor 'n'

    return 0;
}
