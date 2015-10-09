#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

/*
int **create_matrix()
{
    int **p, i, j;

    srand((unsigned)time(NULL));
 
    p = (int **)malloc(10 * sizeof(int *));
    for ( i = 0; i < 10; i++)
    {
        p[i] = (int *) malloc (10 * sizeof(int));
        for ( j = 0; j < 10; j++)
        {
            p[i][j] = rand() % 2;
        } 
    }

    p[0][0]=0;
    p[9][9]=0;

    return p;
}
*/

int **create_matrix()
{
    int **p,i,j;
    p = (int **)malloc(10 * sizeof(int *));
    for (i=0; i<10; i++)
    {
        p[i] = (int *) malloc (10 * sizeof(int));
        for ( j = 0; j<10; j++)
        {
            p[i][j] = 0;
        }
    }
    return p;
}

void print_matrix (int **m)
{
    int i, j;

    for ( i = 0; i < 10; i += 1 )
    {   
        for ( j = 0; j < 10; j += 1 )
        {
            printf ( "%d\t", m[i][j] );
        }
        printf ( "\n" );
    }
}

int find_exit (int **m, int x, int y)
{

    if (x==9 && y==9)
    {
        return 1;
    }

    else if (x>0 && m[x][y+1]==0 && y<10)
    {
        //return 1;
        return find_exit(m,x,y+1);
    }

    else if (x<10 && m[x+1][y] == 0)
    {
        //return 1;
        return find_exit(m,x+1,y);
    }
    
    /* 
    else if (x<10 && (m[x+1][y] != 0 || m[x][y+1] != 0))
    {
        m[x][y]=2;
        return  find_exit(m,x-1,y);
    }
    */

    else if (y>0 && m[x+1][y]==0 && x<10)
    {
        return find_exit(m,x+1,y);
    }

    else if (y<10 && m[x][y+1] == 0)
    {
        //return 1;
        return find_exit(m,x,y+1);
    }

    else
    {
        return 0;
    }
    
    //m[y][x]=2;
    /* 
    for ( i = 0; i < 10; i++ )
    {
        free(m[i]);
    }
    free(m);
    */
    //return 0;
    
}
