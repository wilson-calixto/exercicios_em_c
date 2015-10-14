/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 5
 * questao01.c
 *
 * Equipe:
 *      
 *      Andressa Moreira
 *      Lucas Botinelly
 *      Delrick Oliveira
 *      Sergio Pinheiro
 *      Juliany Raiol
 */

#include <stdio.h>
#include <stdlib.h>
#include "fl05q01.c"

int main ()
{
    int tamvet;

    printf("Digite o tamanho do  vetor:");
    scanf("%d", &tamvet);

    int vet[tamvet], tamcomb, i, j;

    for (i = 0; i < tamvet; i++)
    {
        printf("Digite o vetor:");
        scanf("%d", &vet[i]);
    }

    printf("Digite o tamanho da combinacao:");
    scanf("%d", &tamcomb);
    
    int * aux = (int *) malloc((tamcomb*sizeof(int)));
    
    for (i = 0; i < tamvet; i++)
    {
        aux = abc(vet, tamvet, i, tamcomb);
        
        for(j = 0; j < tamcomb; j++)
        {
            printf(" %d", aux[j]); 
        }

        printf("\n");
    }


    //vetcomb = comb(vet, tamvet, tamcomb, qtd);

    //imprimir vetcomb
    
    free(aux);
    return 0;
}


