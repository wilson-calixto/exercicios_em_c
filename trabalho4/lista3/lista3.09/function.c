
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
int find_position(int x, int y, int a[x][y])
{
    if (a[x][y] == 0)
    {
        if ((a[x-1][y] == -1 && a[x+1][y] == 0) || (a[x][y-1] ==-1 && a[x][y+1] == 0))
        {
            return 1;
        }
    }else
        return 2;
}

void mold(int x, int y, int l, int c,int a[l][c])
{
    int i, j;
    
    for (i=1; i<=x ; i++)
    {
        a[i][0] = -1;
        a[i][y+1] = -1;
    }
    for (j=0; j<=y+1; j++)
    {
        a[0][j] = -1;
        a[x+1][j] = -1;
    }

}
