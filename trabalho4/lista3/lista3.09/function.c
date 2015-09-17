
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * function.c
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
#include<stdio.h>
#define MAX 20

int find_position(int m[][MAX], int x, int y)
{
    if (m[x][y] != -1 && ((m[x-1][y] == -1 && m[x+1][y] != -1) || (m[x][y-1] == -1 && m[x][y+1] != -1)))
    {
        return 1;
    }else
        return 0;
}

void print_matriz(int m[][MAX], int line, int col)
{
    int i, j;
    for (i=0; i<line; i++)
    {
       for(j=0; j<col; j++)
       {
            printf("%d \t", m[i][j]);
       }
       printf("\n");
    }
}


void write_matriz(int m[][MAX], int l, int c)
{
    int i, j, cont;
    for (i = 0; i<l; i++)
    {
        for (j=0; j<c; j++)
        {
            if(find_position(m, l, c) == 1)
            {
                cont ++;
                m[i][j] = cont;
            }
        }
    }
}

