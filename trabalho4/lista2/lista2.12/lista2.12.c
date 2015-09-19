
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
    int n, vet[MAX], i,j, x, p[MAX], ind, cont;

    printf("Digite o grau do polimonio: \n");
    scanf("%d", &n);
    for (i=n; i>=0; i--)
    {
        printf("Coeficiente de A[%d]: \n", i);
        scanf("%d", &vet[i]);
    }
    printf("Digite um valor para X: \n" );
    scanf("%d", &x);
    ind = n;
    for(j=n-1;j>=0;j--)
    {
        p[j] = polynomial(vet,p,j,x,ind);
    }
    for (i=ind-1 ; i>=0; i--)
    {
        printf("%dx^%d + ", p[i], i);
    }
    printf("\n");
}
 

