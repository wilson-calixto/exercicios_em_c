
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
#define MAX 30

int find_position(int a[][MAX], int x, int y)
{
    if (a[x][y] != -1 && ((a[x-1][y] == -1 && a[x+1][y] != -1) || (a[x][y-1] == -1 && a[x][y+1] != -1)))
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
    int cont =0;

    cont ++;
    m[l][c] = cont;
}

