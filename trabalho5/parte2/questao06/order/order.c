#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int *create_vec_rand(int n)
{
    int *v, i;

    v = malloc (n * sizeof (int));
    srand ((unsigned)time(NULL));

    for ( i = 0; i < n; i++ )
    {
        v[i] = rand() % n;
    }

    return v;
}

int *create_vec_ord(int n)
{
    int *v, i;

    v = malloc (n * sizeof (int));

    for ( i = 0; i < n; i += 1 )
    {
        v[i] = i;
    }

    return v;
}

void print_vec(int n, int *v)
{
    int i;

    for ( i = 0; i < n; i++ )
    {
        printf ( "%d ", v[i] );
    } 

    printf ( "\n" );
}

void bubblesort (int n, int *v)
{
    int j, change=0;

    for ( j = 0; j < n-1; j++ )
    {
        if (v[j]>v[j+1])
        {
            int temp = v[j];
            v[j] = v[j+1];
            v[j+1] = temp;
            change = 1;
        }
    }
    if (change != 0)
    {
        bubblesort (n-1,v);
    }
}

void quick( int *v, int inicio, int fim)
{
    int pivo, temp, i, j, meio;

    i = inicio;
    j = fim;

    meio = (int) ((i+j)/2);
    pivo = v[meio];

    while (j > i)
    {
        while (v[i] < pivo)
        {
            i=i+1;
        }
        while (v[j] > pivo)
        {
            j=j-1;
        }
        
        if(i<=j)
        {
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i=i+1;
            j=j-1;
        }

    }

    if (inicio < j)
    {
        quick(v, inicio, j);
    }
    if (i < fim)
    {
        quick(v, i, fim);
    }

}


