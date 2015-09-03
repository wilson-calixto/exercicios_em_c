/*
 * Programa de Computadores e Algoritmos
 * Trabalho 1
 * Questao 3.50
 *
 * Equipe: 
 *         Delrik
 *         Elisabeth
 *         Hermamm
 *         Luis
 *         Luana
 *         Richardson
 *
 */

#include <stdio.h>

int main (int argc, const char *argv[])
{
	int n;
	float h,i;

	h=0;

	printf("Digite o valor de N\t");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		h=h+(1/i);
	}
	
	printf("O valor de H é: \t %.2f \n", h);

	return 0;
}
