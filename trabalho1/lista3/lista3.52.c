/*
 * Programa de Computadores e Algoritmos
 * Trabalho 1
 * Questao 3.52
 *
 * Equipe: 
 *         Delrik
 *         Elisabeth
 *         Hermamm
 *         Luiz
 *         Luana
 *         Richardson
 *
 */

#include<stdio.h>

int main( int argc, const char *argv[])
{
	int tam;
	float termo, h,i;
	printf("Digite a quantidade de termos\n");
	scanf("%d", &tam);
	h=0;
	for(i=0;i<tam;i++)
	{
		termo=1/(i+1);
		h= h+termo;		
	}
	printf("O valor de h e: %f\n", h);
	return 0;
}
