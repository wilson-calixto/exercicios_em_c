/*
 * Programacao de Computadores e ALgoritmos
 * lista4.08b.c
 *
 * Equipe:
 *      Sergio Pinheiro
 *      Andressa Moreira
 *      Wilson Araújo
 *      Gabriel Faraco
 *      Benjamin Borges

 Para executar esse programa utilizes ./lista4.08b < dados_lista4.08b.txt

 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int main ( int argc, char *argv[] )
{
	int tamanho,i;
	int *vetor1, *vetor2;
	scanf ( "%d", &tamanho);
	printf ( "Tamanho do vetor  =   %d \n", tamanho);
	vetor1 = (int*) malloc (tamanho*sizeof(int*));
	vetor2 = (int*) malloc (tamanho*sizeof(int*));
	
	insere_vetor(tamanho , vetor1);
	insere_vetor(tamanho , vetor2);
	
	printf("O produto escalar dos vetores é = %d\n", produto_escalar(tamanho, vetor1, vetor2));	
	
	free(vetor1);
	free(vetor2);

	return 0;
}
