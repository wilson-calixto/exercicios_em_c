
/* Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.17.c
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
#define MAX 40
int main()
{
    int n, vet[MAX], i, sum;

    printf("Digite a quantidade de termos: \n");
    scanf("%d", &n);
    printf("Digite os %d termos: \n", n);
    for(i=0;i<n; i++)
    {
        printf("Digite o termo[%d]: ", i+1);
        scanf("%d", &vet[i]);
    }
    sum = sum_max(vet,n);
    printf("A soma maxima do segmento eh: %d \n", sum);
}
