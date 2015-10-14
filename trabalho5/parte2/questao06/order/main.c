#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "order.h"
//#include <sys/time.h>

int main ( int argc, const char *argv[] )
{
    int *b,*q,n;
    clock_t t;
    //int i,j;
    //struct timeval inicio, final;
    //int tmili;

    scanf ( "%d", &n );
    // cria um vetor desordenado
    b=create_vec_rand(n);
    
    t = clock();
    bubblesort(b,n);
    t = clock()-1;
    printf ( "tempo - bubblesort - vetor desordenado: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)) );

    /*
    //print_vec(n,b);
    gettimeofday(&inicio, NULL);
    bubblesort (b,n); // funcao para organizar vetor desordenado
    for ( j = 0; j < 10; j++ )
        for ( i = 0; i < 1387634340; i++ );
    gettimeofday(&final, NULL);
    tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    // imprime o tempo decorrido
    printf ( "tempo - bubblesort - vetor desordenado: %d\n", tmili );
    */

    t = clock();
    bubblesort(b,n);
    t = clock()-1;
    printf ( "tempo - bubblesort - vetor ordenado: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)) );    

    /*
    //print_vec(n,b);
    gettimeofday(&inicio,NULL);
    bubblesort(b,n); // chama novamente a funcao para um vetor ja ordenado
    for ( j = 0; j < 10; j++ )
        for ( i = 0; i < 1387634340; i++ );
    gettimeofday(&final, NULL);
    tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    // imprime o tempo decorrido
    printf ( "tempo - bubblesort - vetor ordenado: %d\n", tmili );
    //print_vec(n,b);
    */
    free(b);
    
    // cria um vetor desordenado
    q=create_vec_rand(n);

    t = clock();
    quick(q,0,n-1);
    t = clock()-1;
    printf ( "tempo - quicksort - vetor desordenado: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)) ); 

    /*
    //print_vec(n,q);
    gettimeofday(&inicio,NULL);
    quick(q,0,n-1); // chama a funcao quick para organizar o vetor desordenado
    for ( j = 0; j < 10; j++ )
        for ( i = 0; i < 1387634340; i++ );
    gettimeofday(&final, NULL);
    tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    // imprime o tempo decorrido
    printf ( "tempo - quicksort - vetor desordenado: %d\n", tmili );
    //print_vec(n,q);
    */

    t = clock();
    quick(q,0,n-1);
    t = clock()-1;
    printf ( "tempo - quicksort - vetor ordenado: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)) );

    /*
    gettimeofday(&inicio, NULL);
    quick(q,0,n-1); // chama novamente a funcao para um vetor ja ordenado
    for ( j = 0; j < 10; j++ )
        for ( i = 0; i < 1387634340; i++ );
    gettimeofday(&final, NULL);
    tmili = (int) (1000 * (final.tv_sec - inicio.tv_sec) + (final.tv_usec - inicio.tv_usec) / 1000);
    printf ( "tempo - quicksort - vetor ordenado: %d\n", tmili );
    //print_vec(n,q);
    */
    free(q);
 
    return 0;
}
