/*
* Programacao de Computadores e ALgoritmos
* Trabalho 4
* lista2.01.c
*
* Equipe:
*  Sergio Pinheiro
*  Wilson Araújo
*  Andressa Moreira
*  Benjamin Borges
*  Gabriel Faraco
      
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../util.c/util.h"

int main(int argc, const char *argv)
{
	int a[50],tam=0,i=0;

	printf("digite a quantidade de termos da sua sequência:\n");
	scanf("%d",&tam);
	
	printf("digite a sua sequência de numeros separadamente:\n");
	for (i = 0; i < tam; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("A sequência inversa é: \n");
	inverso(a,tam);

	return 0;
}
