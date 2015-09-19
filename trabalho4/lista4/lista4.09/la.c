/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 2
 * main.c
 *
 * Equipe:
 *
 */
#include	<stdlib.h>
#include <stdio.h>


int main ( int argc, char *argv[] )
{
    int *vetor,tamanho_do_vetor,menor;
    printf("digite o tamanho do vetor ");
    scanf("%d",&tamanho_do_vetor);
        
    vetor=(int*)malloc(tamanho_do_vetor*sizeof(int));    
    
  
	printf("O menor indice do vetor é : %d",menor);

    return 0;
}				/* ----------  end of function main  ---------- */


