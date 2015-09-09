/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 3
 * lista3.01.c
 *
 * Equipe:
 *  Sergio Pinheiro
 *  Delrick Oliveira
 *  Jackson Kevin
 *  Manoel Victor
 *  Gabriel Faraco
 *  Raí Santos
 *      
 */

#include <stdio.h>
#include "../../util.c/util.h"

int main (int argc, const char *argv)
{
	float n;
	printf("digite um numero: ");
	scanf("%f",&n);
	if(is_null(n)==0){		
		printf("este numero é nulo!");
	}else{
		printf("numero não nulo!");
	}
	return 0;
}
