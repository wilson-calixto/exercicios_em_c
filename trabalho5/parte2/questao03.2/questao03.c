/*
Programaçao de Computadores e Algoritmos
Trabalho 5
Questão 03 da Lista 4
Grupo:
	Davi Tavares;
	Hermann Hernani;
	Evandro Fernandes;
	Lucas Frota;
	Gabriel Faraco;
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main()
{
	int *n, num, i, cont;

	puts("Informe n: ");
	scanf("%d", &num);
	n = malloc(sizeof(int) * num);
	for(cont = 0; cont < num; cont++)
		{
			n[cont] = cont + 1;
		}

	ListP(n, num);
	return 0;
}
