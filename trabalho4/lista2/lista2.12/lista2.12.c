
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
#include<stdio.h>
#include "function.h"
#define MAX 10

int main()
{
    int n, vet[n], i, x;

    printf("Digite o grau do polimonio: \n");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Coeficiente de A[%d]: \n", i);
        scanf("%d", &vet[i]);
    }
    printf("Digite um valor para X: \n" );
    scanf("%d", &x);
}
 

