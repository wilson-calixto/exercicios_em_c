#include <stdlib.h>
#include <stdio.h>

/* Funcao para criar um vetor A e retorna-lo */
int *set_a(int n)
{
    int i, *a;

    a=(int *) malloc (n * sizeof(int));
    
    for ( i = 0; i < n; i ++ )
    {
        scanf ( "%d", &a[i] );
    }

    return a;
}

/* funcao para criar um vetor B e retorna-lo */
int *set_b(int m)
{
    int i, *b;

    b=(int *) malloc (m * sizeof(int));

    for ( i = 0; i < m; i ++ )
    {
        scanf ( "%d", &b[i] );
    }

    return b;
}

/* Funcao verifica se A esta contido em B
 * recebe dois vetores
 * e a quantidade de elementos
 * retorna 0 ou 1
 */
int a_contains_b(int *a,int n, int *b, int m)
{
    int i, j, status;

    status = 0;

    for ( i = 0; i < n; i += 1 )
    {
        for ( j = 0; j < m; j += 1 )
        {
            if (a[i]==b[j])
            {
                status = 1;
            }
        }
        if (status==0)
        {
            return 0;
            break;
        }
    }

    return 1;
}

/* Funcao verifica se o vetor A e igual a B
 * recebe dois vetores A e B e seus tamanhos
 * retorna 1 ou 0
 */
int ab_equals_ba(int *a, int n, int *b, int m)
{

    if (m==n)
    {
        if ((a_contains_b (a,n,b,m)) && (a_contains_b (b,m,a,n)))
        {
            return 1;
        }
        else
        {
            return 0;
        }               
    }
    else
    {
        return 0;
    }
}

