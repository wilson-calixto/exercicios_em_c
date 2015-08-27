/*
 * Programa de Computadores e Algoritmos
 * Trabalho 1
 * Questao 3.49
 *
 * Equipe: 
 *         Delrik
 *         Elisabeth
 *         Hermann
 *         Luis
 *         Luana
 *         Richardson
 *
 */
 
#include <stdio.h>

int main (int argc, const char *argv[])
{
	float i,n,m,e,soma;
	n=1.0;
	m=1.0;
	soma=n/m;

	printf("informe um valor: ");
	scanf("%f", &e);
	printf("%.0f/%.0f", n,m);
	for (i=1; i<=e; i++)
	{
		n++;
		m+=2;
		soma = soma+(n/m);
		printf(" + %.0f/%.0f ", n, m);
	}
	
	printf("\nO valor da soma dos termos é: \t %.2f \n", soma);

	return 0;
}
