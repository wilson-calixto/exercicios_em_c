
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
    
    for(i=1; i<=line;i++) // Criando uma especie de moldura para a matriz
    {
        mat[i][0]= -1;
        mat[i][col+1]= -1;
    }
    for (j=0; j<=col+1; j++)
    {
        mat[0][j] = -1;
        mat[line+1][j] = -1;
    }
   
    for (i=1; i<=line;i++) // Le a matriz a partir da segunda posicao
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
            if (find_position(i, j, line+2, col+2, mat) == 1)
            {
                cont++;
                mat[i][j]= cont;
            }
        }
    }
    
    for (i=1; i<=line; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

}
