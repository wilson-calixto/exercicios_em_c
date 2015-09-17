
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
    int n, vet[MAX], i, x, p[MAX];

    printf("Digite o grau do polimonio: \n");
    scanf("%d", &n);
    for (i=n-1; i>=0; i--)
    {
        printf("Coeficiente de A[%d]: \n", i);
        scanf("%d", &vet[i]);
    }
    printf("Digite um valor para X: \n" );
    scanf("%d", &x);
    p[n-2] = vet[n-1];
    for (i=0;i>n-3; i++)
    {
        p[i] = polynomial(vet, n-1, x);
        printf("%d \n ", p[i]);
    }
    for (i=n-2; i>=0; i++)
    {
        printf("%dx^%d + ", p[i], i);
        n--;
    }
}
 

