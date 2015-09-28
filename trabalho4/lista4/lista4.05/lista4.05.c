/*
 * Programacao de Computadores e ALgoritmos
 * Trabalho 4
 * lista4.5
 *
 * Equipe:
 *
 *          Jackson Gomes
 *          Paulo Marinho
 *          Hermann
 *          Elizabeth
 *          Jailson
 */

#include <stdio.h>
#include <stdlib.h>
#include "util.h"


int main(int argc, const char *argv[])
{
		int A[100][100];
		int m,n;

		printf("Digite o tamanho da matriz MXN:\n");
		scanf("%d",&n);

	preencher05(A,n);
        imprimeMaior05(A,n);

        return 0;
}
