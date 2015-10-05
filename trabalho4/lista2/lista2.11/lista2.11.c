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
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;

    printf("Digite o grau do polinomio: ");
    scanf("%d", &n);
    
    printf("\n");

    int a[(n+1)], b[n], *p;
    
    p = &a[0];

    //Leitura das razoes do polinomio do grau 0 ate o ultimo grau

    for (i = 0; i <= n; i++)
    {
        printf("Digire o valor de A de Ax^%i: ", i);
        scanf("%d", p);
        p++;
    }

    //Impressao do polinomio
    
    printf("\n f(x) = ");

        for (i = (n); i >= 0; i--)
    {
        printf("%dx^%d", a[i], i);
        if (i != 0)
            printf(" + ");
    }

    //Calculo da derivada em cada um dos graus
    
    for (i = 0; i < n; i++)
    {
        b[i] = a[i+1] * (i+1); 
    }

    //Impressao da derivada
   
    printf("\n f'(x) = ");

    for (i = (n-1); i >= 0; i--)
    {
        printf("%dx^%d", b[i], i);
        if (i != 0)
            printf(" + ");
    }
    printf("\n\n");

    return 0;
}
