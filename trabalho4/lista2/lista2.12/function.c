
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
int polynomial(int vet[], int p[], int n, int a, int ind)
{

    int qx;
    if(n == ind-1)
    {
        qx = vet[ind];
    }
    else
    {
        qx= (p[n+1] * a) + vet[n+1];
    }
    return qx;
}
