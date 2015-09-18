
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
    int mat[MAX][MAX], line, col, i, j, cont = 0;

    printf("Quantas linhas? \n ");
    scanf("%d", &line);
    printf("Quantas colunas? \n ");
    scanf("%d", &col);
    mold(line, col, line+2, col+2, mat);
    for (i=1; i<=line;i++)
    {
        for (j=1; j<=col; j++)
        {
            printf("Digite o elemento[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=1;i<=line; i++)
    {
        for (j=1; j<=col; j++)
        {
            if (find_position(i, j, mat) == 1)
            {
                printf("Entrou \n");
                cont++;
                mat[i][j]= cont;
                printf("Contou %d \n", cont);
                printf("%d \n ", mat[i][j]);
            }
        }
    }
    
    for (i=0; i<=line+1; i++)
    {
        for(j=0; j<=col+1; j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

}
