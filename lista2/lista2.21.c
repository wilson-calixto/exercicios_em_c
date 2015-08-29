#include <stdio.h>
/*
Questao 21 da Lista 2

Programa simula um caixa eletronico

Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores

Equipe: Jackson Kelvin
	Ewerton Petillo
	Gabriel Faraco
	Lucas Vinicius
*/



int main(int argc, const char *argv)
{
	int valor;
	int cem;
	int cinq;
	int dez;
	int cin;
	int uni;
	
	printf("Qual o valor? ");
	scanf("%d", &valor);
	
	if (valor >= 100)
	{
		cem = (valor - (valor % 100))/100;
		valor = (valor %100);
		printf("\n%d notas de 100", cem);
	}
	if (valor >= 50 && valor < 100)
	{
		valor = valor -50;
		printf("\n1 nota de 50", cin);
	}
	if (valor < 50 && valor >= 10)
	{
		dez = (valor - (valor % 10))/10;
		valor = valor % 10;
		printf("\n%d notas de 10", dez);
	}
	if (valor < 10 && valor >= 5)
	{
		valor = valor - 5;
		printf("\n1 nota de 5");
	}
	if (valor < 5)
	{
		printf("\n%d notas de 1\n", valor);
	}	
}
