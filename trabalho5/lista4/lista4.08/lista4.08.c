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
			/*a diferença entre as funções strdup e strcpy é que a strdup ao invés de 
			retornar uma cópia em uma string definida para receber essa cópia, ela retorna
			um ponteiro para uma nova string*/
}
