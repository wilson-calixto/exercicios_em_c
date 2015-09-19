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
#include"util.h"

int main(int argc,const char *argv[])
	{
		int maior,n,i;
		int linha, coluna;

		printf("Digite a quantidade de linhas da matriz A:\n");
		scanf("%d",&n);
		
	preencher(n);
        imprimeMaior(n);

        return 0;
}
