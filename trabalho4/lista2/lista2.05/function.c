/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 1
 * function.c
 *
 * Equipe:
 *
 *          Davi Tavares
 *          Delrick Oliveira
 *          Evandro Fernandes
 *          Lucas Frota
 *          Manoel Victor
 */

#include <stdio.h>
#include <stdlib.h>

float power(float x, int y)
{
    if(y == 1)
        return x;
    else
        return x* power(x, y-1);
}

float raiz(float x)
{
    float n;
    float recorre = x;

    for(n = 0; n < 10; n++)
        recorre = recorre/2 + x/(2*recorre);

    return recorre;
}

void sort(float *x, int n)
{
    int i,j;
    float aux;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(x[i] < x[j])
            {
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
}

void elimina(float *x, int n)
{
    int i;

    sort(x, n);

    for(i = 0; i < n; i++)
    {
        if(x[i] == x[i+1])
        {
            x[i] = 0;
            sort(x, n);
        }
    }
}

void ler_vetores(float *x, float *y, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Informe o valor de x:\n");
        scanf("%f", &x[i]);

        printf("Informe o valor de y:\n");
        scanf("%f", &y[i]);
    }
}

void verificaN(int *n)
{
    if(*n < 1 || *n > 100)
    {
        while(*n < 1 || *n > 100)
        {
            printf("Valor invalido. Informe uma valor entre 1 e 100:\n");
            scanf("%d", &*n);
        }
    }
}

void geraD(float *d, float *A, float *B, float x, float y, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        d[i] = raiz( power( (x - A[i]) , 2) + power( (y - B[i]) , 2) ); 
    }
}

void printD(float *d, int n)
{
    int i;
    
    printf("A(s) distancia(s) é/são: ");

    for(i = 0; i < n; i++)
    {
        if(d[i] != 0)
            printf("%0.2f ", d[i]);
    }

    putchar('\n');
}
