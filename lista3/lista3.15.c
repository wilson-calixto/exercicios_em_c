/*
 * Programação de Computadores e Algoritmos
 * Trabalho 1
 * Equipe 1
 * Questão 3.15
 * Equipe: Benjamin Borges
 * Davi tavares 
 * Manoel Souza
 * Lucas Botinelly
 * Jackson Gomes
 * Robson Borges
 * Grupo 1 -
 *  	      *  */

#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a, b, aux, i, n;

	a = 0;
	b = 1;

	printf("Informe um número: \n");
	scanf("%d", &n);
	
	printf("Série\n");
	printf("%d\n", b);

	for(i = 0; i < n; i++)
	{
		aux = a+b;
		a = b;
		b = aux;
		
	printf("%d\n", aux);
	}
	return 0;
}
