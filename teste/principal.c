/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * principal.c
 *
 * Equipe:
 *
 *          Jackson Kelvin
 *          Sergio Alexandre
 *          Grabriel Faraco
 *          Manoel Florencio
 *          Rai Santos
 *          Delrick Oliveira 
 */

#include <stdio.h>
#include<stdlib.h>
int main(int argc, const char *argv[])
{
    int *x,*y,tamanho,i;
    
    /* pede os dados do ususario  */
    printf ( "Digite o tamanho do vetor\n" );
    scanf ( "%d", &tamanho );

    x=(int*)malloc(sizeof(int)*tamanho);
    y=(int*)malloc(sizeof(int)*tamanho);

    /* completa os vetores */


    printf ( "primeiro vetor\n" );
    
    for (i=0;i<tamanho ;i++ )
    {
        printf ( "digite o valor  \n" );
        scanf ( "%d",&x[i] ); 
    }

    printf ( "segundo vetor\n" );

    for (i=0;i<tamanho;i++ )
    {
        printf ( "digite o valor\n" );
        scanf ( "%d", &y[i] ); 
    
    }
    
        /* chama a funcao que calcula o produto */
        produto_escalar(x,y,tamanho);
    return 0;
}


