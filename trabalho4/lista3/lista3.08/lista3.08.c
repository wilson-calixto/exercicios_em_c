/*
* Programacao de Computadores e Algoritmos
* Trabalho 4
* Questao 3.08
* Equipe: 	Wilson Neto
* 		Sergio Pinheiro
* 		Andressa Moreira
* 		Benjamim Borges
*		Gabriel Faraco
*
* */


#include <stdio.h>
#include <stdlib.h>
#include "../../util.c/util.h"
#include "comb.h"

int fatorial(int n);
int comb(int a, int b);

int main(int argc, char *argv[])
{
	//para deixar genérico, precisaríamos perguntar o user
	//o valor de num
	int i=0,i2=0,num=8;

	for(i = 0; i <= num; i++) 
	{

		//inicio de linha
		//tabulamos nela, é o numero total de linhas - o num da linha atual
		for(i2 = 0; i2 <= i; i2++) 
		{
			//usamos 2 pois só vamos até 2 digitos
			printf("%2d  ",comb(i,i2));
		}

		//fim da linha
		printf("\n");
	}


	return 0;
}

