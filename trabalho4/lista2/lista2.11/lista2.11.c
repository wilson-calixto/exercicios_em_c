/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista2.11.c
 *
 * Equipe:
 *      
 *      Sergio Pinheiro
 *      Andressa Moreira
 *      Wilson Neto
 *      Benjamon Borges
 *      Gabriel Faraco
 */

#include<stdio.h>

int main()
{
    int n, i;

    printf("Digite o grau do polinomio: ");
    stanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        pritnf("\nDigire o valor de A de ax^%i: ", i);
        scanf("%d", a[i]);
    }
    
    printf("\n p(x)=");

    for (i = n; i >= 0; i--)
    {
        printf("%dx^%d", a[i], (i);
        if (i != 0)
            printf("+");
    }
}
