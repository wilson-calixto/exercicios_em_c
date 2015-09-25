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
    int m, n, esc,  i, j, resps = 0, respp = 1;

    printf("Digites o numero de linhas: ");
    scanf("%d", &m);
        
    printf("Digites o numero de colunas: ");
    scanf("%d", &n);

    int val[m][n];
    //int **p;

    //p = (int *) malloc(sizeof(int));

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Digite o valor da posicao %dx%d: ", (i+1), (j+1));
            scanf("%d", &val[i][j]);
        }
    }

    printf("\nDigite a linha a ser somada: ");
    scanf("%d", &esc);

    esc--;

    for (i = 0; i < n; i++)
    {
        resps = val[esc][i] + resps;
    }

    printf("\nDigite a coluna a ser multiplicada: ");
    scanf("%d", &esc);

    esc--;

    for (i = 0; i < m; i++)
    {
        respp = val[i][esc] * respp;
    }

    printf("Soma da linha: %d\n", resps);
    printf("Produto da coluna: %d\n", respp);

}
