/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 1
 * lista2.05.c
 *
 * Equipe:
 *
 *          Davi Tavares
 *          Delrick Oliveira
 *          Evandro Fernandes
 *          Lucas Frota
 *          Manoel Victor
 */

#include<stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, const char *argv[])
{
    int n, i;
    float x, y, *A, *B, *d;

    printf("Informe o valor de x:\n");
    scanf("%f", &x);
    printf("Informe o valor de y:\n");
    scanf("%f", &y);

    printf("Informe o valor de n:\n");
    scanf("%d", &n);

    verificaN(&n);

    A = malloc(sizeof(float) * n);
    B = malloc(sizeof(float) * n);
    d = malloc(sizeof(float) * n);

    ler_vetores(A, B, n);

    geraD(d, A, B, x, y, n);   

    elimina(d, n);

    printD(d, n);
    
    return 0;
}
