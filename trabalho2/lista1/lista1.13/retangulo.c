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
		printf("|");
		for(j=0;j<colunas;j++)
<<<<<<< HEAD
		{	
			printf("+");
=======
		{
			if(j == 0 || j == colunas-1)
			{
				printf("|");
			}
			else 
			{
				printf("+");
			}
>>>>>>> d9ce939ca01e3a4b4ebc049e6922e4957473be24
		}
		printf("|");
		printf("\n");
	}
}
