
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
int find_position(int x, int y, int l, int c, int a[l][c])
{
    if (a[x][y] != -1  && ((a[x-1][y] == -1 && a[x+1][y] != -1) || (a[x][y-1] == -1 && a[x][y+1] != -1)))
    {
            return 1;
    }else
        return 2;
}

