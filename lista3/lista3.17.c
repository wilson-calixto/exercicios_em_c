/*
Questao 17 da Lista 3

Algoritmo de calculo de media

Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores

Equipe: Ewerton Petillo
	Jackson Kelvin
	Gabriel Faraco
	Lucas Vinicius

*/

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int nu;
	int ac = 1;
	int co = 0;
	printf("numero: \n");
	scanf("%d", &nu);
	for (co = nu; co >= 1; co--)
	{
		ac = ac * co;
	}
	printf("%d\n", ac);
	return 0;
}
