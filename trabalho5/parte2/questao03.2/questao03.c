/*
 * Programacao de Computadores e Algoritmos
 * Trabalho 5
 * trabalho5.2.02.c
 *
 * Equipe:
 *
 *          Manoel Victor
 *          Paulo Marinho
 *          Wilson Neto
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main()
{
	int *n, num, i, cont; //vetor do conjunto, num - numero de elementos, i - contador

	puts("Informe n: ");
	scanf("%d", &num);
	n = malloc(sizeof(int) * num);
	for(cont = 0; cont < num; cont++)
		{
			n[cont] = cont + 1;
		}

	ListP(n, num); //lista as permutaçoes do vetor 'n'

	return 0;
}
