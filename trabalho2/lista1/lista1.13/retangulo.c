/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 1
 * Questao 13
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

void retangulo(int linhas, int colunas)
{
	int i,j;
	for(i=0;i<linhas;i++)
	{
		for(j=0;j<colunas;j++)
		{
			if(j == 0 || j == colunas-1)
			{
				printf("|");
			}
			else 
			{
				printf("+");
			}
		}
		printf("\n");
	}
}
