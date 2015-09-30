/*
 * Programação de Computadores e Algoritmos
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
#include <stdlib.h>
#include "funcao.h"

int main (int argc, const char *argv[])
{
	char s[50],cs[50];
	printf("escreva a string:\n");
	scanf("%[^\n]s",s);
	printf("esta é a sua cópia:\n");	
	printf("%s\n",string_copy(cs,s));
	

	return 0;
}
