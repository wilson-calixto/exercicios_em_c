/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * reswpo.c
 *
 * Equipe:
 *
 */


#include	<stdlib.h>
#include<stdio.h>



/* Dado um vetor e seu tamanho, a funcao completa esse vetor */
void completa_vetor(int *vetor,int tamanho_do_vetor)
{
    int i;
    
    for ( i=0;i<tamanho_do_vetor;i++ )
        {
        
           scanf ( "%d", &vetor[i] );      
        }
}



int menor_do_vetor ( int *vetor)
{
    int menor,menor_indice,tam_vet,i;
       
    for (i=0;i<tam_vet ;i++ )
    {
        if(i==0)
        {
            menor=vetor[i];
            menor_indice=i;
        
        }
        if(vetor[i]<menor)
        {
            menor=vetor[i];
            menor_indice=i;
        
        }
    
    
    }



    return menor_indice;
}


void mostra_vetor(int *vetor,int tamanho_do_vetor)
{
    int i;
    
    for ( i=0;i<tamanho_do_vetor;i++ )
        {
        
           printf ( "%d\n", vetor[i] );      
        }
}