/*
Programaçao de Computadores e Algoritmos
Trabalho 5
Questão 08 da Lista 4
Grupo:
	Davi Tavares;
	Hermann Hernani;
	Evandro Fernandes;
	Lucas Frota;
	Gabriel Faraco;
*/

#include <stdio.h>
#include <string.h>

char *string_copy (char *a, char *b)
{
	int i;
	for (i = 0; b[i] != '\0'; i++) 
	{   
		a[i] = b[i];
	}
	a[i] = '\0';
	return a;
}
