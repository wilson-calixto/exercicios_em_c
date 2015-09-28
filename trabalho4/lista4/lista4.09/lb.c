/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista4.09.b.c
 *
 * Equipe:
 *          Paulo Henrique
 *          Rai Santos 
 *          Jackson Kelvin
 *          Ewerton Petillo
 *      
 */
//Autor:Wilson Calisto

#include<stdlib.h>
#include<stdio.h>
#include "menor_do_vetor.h"
void completa_vetor(int *vetor,int tamanho_do_vetor);
int s_sort(int *vetor,int tam);

void mostra_vetor(int *vetor,int tamanho_do_vetor);

int main ( int argc, char *argv[] )
{
    int *vetor,tamanho_do_vetor;
    printf("digite o tamanho do vetor ");
    scanf("%d",&tamanho_do_vetor);
        
    vetor=(int*)malloc(tamanho_do_vetor*sizeof(int));    
    completa_vetor(vetor,tamanho_do_vetor);
    s_sort(vetor,tamanho_do_vetor);
    mostra_vetor(vetor,tamanho_do_vetor);
/*MUDAR PARA ELEMANTO MINIMO*/
    return 0;
}				/* ----------  end of function main  ---------- */


