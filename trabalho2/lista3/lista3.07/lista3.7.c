/*Programacao de Computadores e Algoritmos / Laboratorio de Programacao de Computadores
 *
 * Trabalho 2
 * Lista 3
 * Questao 7
 *
 *\Equipe:  Elizabeth Castro
 *          Andreza Moreira
 *          Juliany Raiol
 *          Luana Andrade
 *          Wilson Neto
 *
 *
 * / */

#include <stdio.h>
#include "../../util.c/util.h"

int main (int argc,const char *argv[])
{

	int n1,n2,n3,menor;
	
	printf("Digite três valores:\n");
	scanf("%i %i %i", &n1,&n2,&n3);

	menor = lowest(n1,n2,n3);
	
	printf("%.2f",menor);
	return 0;		
}
