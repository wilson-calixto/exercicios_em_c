/*
Programaçao de Computadores e Algoritmos

Trabalho 3

Equipe:
	Delrick Oliveira
	Gabriel Faraco
	Jackson Kelvin
	Manoel Victor
	Rai Santos
	Sergio Pinheiro

*/

#include <stdio.h>
#include "util.h"

int main(int argc, const char *argv[])
{
	int n;

	puts("Informe um numero:");
	scanf("%d",&n);

	printf("O resultado é %1.2f\n",(float) calc_num(n));	
	return 0;
}
