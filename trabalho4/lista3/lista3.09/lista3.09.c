
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista3.9.c
 *
 * Equipe:
 *
 *          Paulo Henrique
 *          Rai Santos
 *          Jackson Kelvin
 *          Wilson Calisto
 *          Ewerton Petillo
 *          
 */

#include <stdio.h>
#include "function.h"
#define MAX 20

int main()
{
    int mat[MAX][MAX], line, col, i, j, cont;

    printf("Quantas linhas? \n ");
    scanf("%d", &line);
    printf("Quantas colunas? \n ");
    scanf("%d", &col);
    for (i=0; i<line;i++)
    {
        for (j=0; j<col; j++)
        {
            printf("Digite o elemento[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (i=0;i<line; i++)
    {
        for (j=0; j< col; j++)
        {
            if (find_position(mat, i, j) == 1)
            {
                write_matriz(mat, i, j);
            }
        }
    }

    print_matriz(mat, line, col);

}
