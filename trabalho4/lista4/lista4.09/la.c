/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista4.09.a.c
 *
 * Equipe:
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include "menor_do_vetor.h"
void completa_vetor(int *vetor,int tamanho_do_vetor);

int main ( int argc, char *argv[] )
{
    int *vetor,tamanho_do_vetor,menor;
    printf("digite o tamanho do vetor ");
    scanf("%d",&tamanho_do_vetor);
        
    vetor=(int*)malloc(tamanho_do_vetor*sizeof(int));    
    completa_vetor(vetor,tamanho_do_vetor);
    menor=menor_do_vetor(vetor);
    printf("O menor indice do vetor é : %d\n",menor);
/*MUDAR PARA ELEMANTO MINIMO*/
    return 0;
}				/* ----------  end of function main  ---------- */


