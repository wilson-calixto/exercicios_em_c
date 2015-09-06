/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 1
 * Questao 5
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 *     Autor: Juliany Raiol
 *
 * / */
 
#include <stdio.h>
#include <string.h>

int main()
{
	int i, tam;
	char numero[1000];
	scanf("%s",numero);
	tam = strlen(numero);
	for(i=tam;i--;)
	{
		printf("%c",numero[i]);
	}
	printf("\n");
	return 0;
} 