
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
    int qx;
    qx = (vet[n] * a) + vet[n-1];
    return qx;
}
