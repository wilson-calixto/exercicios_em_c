
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
        if ((a[x-1][y] == -1 && a[x+1][y] == 0) || a[x][y-1] == -1 && a[x][y+1 == 0])
        {
            return 1;
        }
    }else
        return 0;
}


