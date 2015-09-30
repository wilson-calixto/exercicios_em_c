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

char *string_copy (char *a, char *b)	//string de destino (vazia) e string de origem (contém a frase a ser copiada)
{
	int i;
	for (i = 0; b[i] != '\0'; i++) //enquanto o caracter for diferente de '\0' que significa o final da string
	{   
		a[i] = b[i];	//cada posição da string vazia recebe cada posição da string origem
	}
	a[i] = '\0';
	return a;	//retorna a string copiada
}
