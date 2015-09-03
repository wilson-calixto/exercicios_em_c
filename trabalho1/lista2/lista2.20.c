#include <stdio.h>
/*
Questao 20 da Lista 2

Algoritmo de calculo de media

Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores

Equipe: Ewerton Petillo
	Jackson Kelvin
	Gabriel Faraco
	Lucas Vinicius

*/

int main(int argc, const char *argv[])
{
	float n1, n2, n3, med;

	printf("primeira nota?");
	scanf("%f", &n1);
	printf("segunda nota?");
	scanf("%f", &n2);
	printf("terceira nota?");
	scanf("%f", &n3);
	
	med = (n1 + n2 + n3)/3;	
	if (med >= 7)
	{
		printf("aprovado\n");
	}
	if (med < 7)
	{
		printf("reprovado\n");
	}
	if (med == 10)
	{
		printf("aprovado com distincao\n");
	}
}
