/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 
 * lista4.03.c
 *
 * Equipe:
 *
 *      Sergio Pinheiro
 *      AndressaMoreira
 *      Gabriel Faraco
 *      Benjamin Borges
 *      Wilson Neto
 *           
 */
#include <stdio.h>
#include <stdlib.h>
#include "../../util.c/util.h"

int main(int argc, const char *argv[])
{
    int val[3][3], esc,  i, j, resps = 0, respp = 1;
    //int **p;

    //p = (int *) malloc(sizeof(int));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da posicao %dx%d: ", (i+1), (j+1));
            scanf("%d", &val[i][j]);
        }
    }

    printf("\nDigite a linha a ser somada: ");
    scanf("%d", &esc);

    esc--;

    for (i = 0; i < 3; i++)
    {
        resps = val[esc][i] + resps;
    }

    printf("\nDigite a coluna a ser multiplicada: ");
    scanf("%d", &esc);

    esc--;

    for (i = 0; i < 3; i++)
    {
        respp = val[i][esc] * respp;
    }

    printf("Soma da linha: %d\n", resps);
    printf("Produto da coluna: %d\n", respp);

}
