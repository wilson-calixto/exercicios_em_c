
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

int polynomial(int vet[], int n, int a)
{
    int qx[n-1], x, i;
    x = a;
    for (i=n; i<=0; i--)
    {
          qx[i-1] = (vet[i] * x) + vet[i-1];
    }
    return qx;
}
