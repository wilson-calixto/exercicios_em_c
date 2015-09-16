/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * lista2.03.c
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


/* funcao recebe dois vetores,o numero de loops (len do vetor) e calcula seu produto */
#include <stdio.h>

void produto_escalar(int *vetor1,int *vetor2,int loops)
{   
    int i,produto;   
    for (i=0;i<loops ;i++ )
    {
        produto=vetor1[i]*vetor2[i];

        printf ( "O produto de x[%d] por y[%d] e : %d \n",i+1,i+1,produto );   
    }
   
}


