#include <stdlib.h>
#include <stdio.h>

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

int a_contains_b(int *a,int n, int *b, int m)
{
    int i, j, result;

    result = 0;

    for ( i = 0; i < n; i += 1 )
    {
        for ( j = 0; j < m; j += 1 )
        {
            if (a[i]==b[j])
            {
                result = 1;
            }
        }
        if (result==0)
        {
            return 0;
        }
    }

    return 1;
}

int ab_equals_ba(int *a, int *b)
{

}

