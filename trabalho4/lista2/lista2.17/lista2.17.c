
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.12.c
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
#include "functions.h"

int main()
{
    int n, vet[n], i, sum;

    printf("Digite a quantidade de termos: \n");
    scanf("%d", &n);
    printf("Digite os %d termos: \n", n);
    for(i=0;i<n; i++)
    {
        scanf("%d ", &vet[i]);
    }
    sum = sum_max(vet,n);
    printf("A soma maxima do segmento eh: %d \n", sum);
}
